import requests
from bs4 import BeautifulSoup
import os
import re

# 替换为你的用户名和密码
USERNAME = 'Username'
PASSWORD = 'password'

session = requests.Session()

login_url = 'http://180.201.136.244/login.php'
login_data = {
    'user_id': USERNAME,
    'password': PASSWORD,
    'submit': '登录'
}

# 登录
login_response = session.post(login_url, data=login_data)
if not login_response.ok:
    print("登录失败")
    exit()

print("登录成功")

# 把 range 中的区间修改成需要爬取的专题的 Contest ID 的区间
for CONTEST_ID in range(3881, 3892):
    # 访问题目列表
    contest_url = f'http://180.201.136.244/contest.php?cid={CONTEST_ID}'
    contest_response = session.get(contest_url)
    if not contest_response.ok:
        print("访问contest页面失败")
        exit()

    soup = BeautifulSoup(contest_response.text, 'html.parser')

    # 找到所有问题链接
    problems = soup.find_all('a', href=True)

    # 创建代码保存的文件夹
    code_folder = f'code/{CONTEST_ID}'
    os.makedirs(code_folder, exist_ok=True)

    
    for problem in problems:
        href = problem['href']
        if 'problem.php' in href:  # 确保是题目链接
            problem_id = int(href.split('pid=')[-1])  # 获取问题ID并转换为整数
            
            # 计算问题字母
            if problem_id < 26:
                problem_letter = chr(ord('A') + problem_id)
            else:
                problem_letter = chr(ord('A') + (problem_id // 26) - 1) + chr(ord('A') + (problem_id % 26))
            
            problem_name = problem.text.strip()  # 获取题目名

            # 替换无效字符并替换空格为下划线
            problem_name = re.sub(r'[<>:"/\\|?*]', '', problem_name).replace(' ', '_')

            print(f'正在爬取问题 {problem_letter} 的代码...')
            
            # 确保URL中包含正确的题目ID
            status_url = f'http://180.201.136.244/status.php?cid={CONTEST_ID}&problem_id={problem_letter}&user_id=2024UPC003&language=-1&jresult=4'
            
            # 输出提交记录的URL
            print(f'提交记录的URL: {status_url}')
            
            status_response = session.get(status_url)

            if status_response.ok:
                cpp_links = BeautifulSoup(status_response.text, 'html.parser').find_all('a', string='C++')
                for cpp_link in cpp_links:
                    # 确保链接对应当前问题
                    if cpp_link:
                        cpp_url = 'http://180.201.136.244/' + cpp_link['href']
                        cpp_response = session.get(cpp_url)

                        if cpp_response.ok:
                            cpp_soup = BeautifulSoup(cpp_response.text, 'html.parser')
                            code = cpp_soup.find('pre').text.strip()  # 根据页面结构可能需要调整
                            # 使用题号和题目名命名文件
                            file_name = f'{problem_id}_{problem_name}.cpp'
                            file_path = os.path.join(code_folder, file_name)

                            with open(file_path, 'w', encoding='utf-8') as f:
                                f.write(code)
                            print(f'提取到的代码已保存为 {file_path}')
                            break  # 找到一个有效的代码后退出循环
                        else:
                            print(f"访问C++代码页面失败 for problem {problem_letter}")
            else:
                print(f"访问提交记录页面失败 for problem {problem_letter}")
