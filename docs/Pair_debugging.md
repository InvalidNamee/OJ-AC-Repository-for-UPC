# 对拍

## 如果你不了解对拍

[对拍是什么](https://oi-wiki.org/contest/common-tricks/#%E5%AF%B9%E6%8B%8D)

## 开始之前

将对拍程序、数据生成器、AC 代码以及你的代码放到同一目录中，这样便于执行以下示例。

## 对拍示例

在使用这些示例时，请确保你修改了文件名 `accepted_code.cpp` 和 `your_code.cpp`，使文件名与实际情况一致。

### Linux 环境对拍示例

**运行环境:** `Ubuntu 22.04.3 LTS on Windows 10 x86_64`

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // 对拍组数
    int T = 1000;
    // 编译数据生成器，AC代码，和你的代码
    system("g++ mkdat.cpp -o mkdat && g++ accepted_code.cpp -o std && g++ your_code.cpp -o ans");
    for (int i = 0; i < T; ++i) {
        // 生成随机数据，分别运行两个程序
        system("./mkdat >input && ./std <input >std_ans && ./ans <input >your_ans");
        // 比较 std_ans 和 your_ans
        if (system("diff std_ans your_ans")) {
            // 发现问题，保留数据并结束程序
            break;
        }
        // 通过该测试点
        printf("pass test %d\n", i);
    }
    return 0;
}
```

### Windows 环境对拍示例

**运行环境:** `Windows 11`

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // 对拍组数
    int T = 1000;
    // 编译数据生成器，AC代码，和你的代码
    system("g++ mkdat.cpp -o mkdat & g++ accepted_code.cpp -o std & g++ your_code.cpp -o ans");
    for (int i = 0; i < T; ++i) {
        // 生成随机数据，分别运行两个程序
        system(".\\mkdat.exe >input");
        system("type input | .\\std.exe >std_ans");
        system("type input | .\\ans.exe >your_ans");
        // 比较 std_ans 和 your_ans
        if (system("fc std_ans your_ans")) {
            // 发现问题，保留数据并结束程序
            break;
        }
        // 通过该测试点
        printf("pass test %d\n", i);
    }
    return 0;
}
```

## 总结

对拍是通过对比两个程序在相同输入下的输出是否一致来验证代码正确性的一种方法。通过这种方式，你可以很方便地检测到程序中的错误，尤其是在面对大量数据时。
