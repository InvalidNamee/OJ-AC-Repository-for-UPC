# 爬虫使用指南

本程序主要由 ChatGPT-4o-Mini 完成

## 环境准备

本程序运行环境为 Windows 11.

- **Python 环境**: `conda 24.9.2`，`Python 3.12.7`
- **C++ 环境**: `g++.exe (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0`

## 源代码下载

下载 [Crawler](../Crawler) 目录下的源代码。

## 使用指南

### crawler.py

- **功能**：实现从知码开门爬取用户在一个 Contest ID 的区间内的所有 Contest 中的全部题目的最新一条 AC 记录，存到 `./code/[Contest_ID]/` 中。因未知原因，每个题目会被爬取两次：一次以编号命名，另一次以题目标题命名，之后的流程会处理这个问题。
- **注意**：使用前请先将 `7, 8` 行的用户名和密码改成自己的用户名和密码，将 `28` 行的 Contest_ID 范围改成需要的范围，区间为左闭右开区间。
- 改好之后执行代码：
  ```shell
  python crawler.py
  ```

### merge.py

- **功能**：将 `crawler.py` 爬下来的文件进行合并，相同题目只保留一个，输出到 `./merged_code` 中。
- 执行代码：
  ```shell
  python merge.py
  ```

### process.py

- **功能**：进一步处理上一步的文件，过滤因不明原因造成的多余的空行和用户名数据，保护隐私，输出到 `./final_output`。
- 请先修改 `filter.cpp` 第 5 行的字符串为自己的用户名，然后编译 `filter.cpp`：
  ```shell
  g++ filter.cpp -o a.exe
  ```
  编译完成后，执行：
  ```shell
  python process.py
  ```
  处理完的代码会保存在 `./final_output` 中，每个子文件夹以 `Contest_ID` 编号命名，内部是该 Contest 下的所有提交记录。
