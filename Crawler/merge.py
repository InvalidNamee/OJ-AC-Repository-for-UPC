import os
import shutil
from collections import defaultdict

# 原代码文件夹和合并后代码的目标文件夹
code_folder = 'code'
merged_code_folder = 'merged_code'

# 创建合并后的文件夹结构
os.makedirs(merged_code_folder, exist_ok=True)

# 遍历 code 文件夹中的所有子文件夹
for contest_folder in os.listdir(code_folder):
    contest_path = os.path.join(code_folder, contest_folder)
    if os.path.isdir(contest_path):  # 确保是文件夹
        # 创建合并后的子文件夹
        merged_contest_folder = os.path.join(merged_code_folder, contest_folder)
        os.makedirs(merged_contest_folder, exist_ok=True)

        merged_files = defaultdict(list)

        # 遍历当前子文件夹中的所有文件
        for root, _, files in os.walk(contest_path):
            for file in files:
                if file.endswith('.cpp'):
                    problem_id = file.split('_')[0]  # 获取 problem_id
                    name = '_'.join(file.split('_')[1:]).replace('.cpp', '')  # 获取文件名部分
                    merged_files[problem_id].append((file, name, root))  # 存储文件及其路径

        # 合并文件
        for problem_id, entries in merged_files.items():
            if len(entries) > 1:  # 只有在有相同 problem_id 的情况下才进行合并
                # 获取第一个文件的内容
                first_file_path = os.path.join(entries[0][2], entries[0][0])
                with open(first_file_path, 'r', encoding='utf-8') as f:
                    code_content = f.read()

                # 按名称长度排序后生成新文件名
                sorted_entries = sorted(entries, key=lambda x: len(x[1]))
                new_file_name = f"{problem_id}_" + "_".join(entry[1] for entry in sorted_entries) + ".cpp"
                new_file_path = os.path.join(merged_contest_folder, new_file_name)

                # 将内容写入新文件
                with open(new_file_path, 'w', encoding='utf-8') as f:
                    f.write(code_content)  # 保持内容一致
                print(f'合并文件已保存为: {new_file_path}')
