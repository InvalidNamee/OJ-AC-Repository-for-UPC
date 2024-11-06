import os
import subprocess

# 定义输入和输出文件夹
merged_code_folder = 'merged_code'
final_output_folder = 'final_output'

# 创建最终输出文件夹
os.makedirs(final_output_folder, exist_ok=True)

# 遍历merged_code中的每个子文件夹
for contest_id in os.listdir(merged_code_folder):
    contest_path = os.path.join(merged_code_folder, contest_id)
    if os.path.isdir(contest_path):
        # 为每个子文件夹创建对应的输出文件夹
        output_contest_path = os.path.join(final_output_folder, contest_id)
        os.makedirs(output_contest_path, exist_ok=True)

        for file_name in os.listdir(contest_path):
            if file_name.endswith('.cpp'):
                file_path = os.path.join(contest_path, file_name)

                # 读取文件并传递给a.exe
                with open(file_path, 'r', encoding='utf-8') as f:
                    code = f.read()

                # 使用subprocess运行a.exe并获取输出
                result = subprocess.run(['a.exe'], input=code, text=True, capture_output=True)

                # 保存输出到对应的输出文件
                output_file_path = os.path.join(output_contest_path, file_name)
                with open(output_file_path, 'w', encoding='utf-8') as f:
                    f.write(result.stdout)

                print(f'处理后的文件已保存为 {output_file_path}')
