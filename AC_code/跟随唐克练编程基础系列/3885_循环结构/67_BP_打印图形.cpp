#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    char c = getchar();
    int n = c - 'A' + 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) putchar(' ');
        for (int j = i; j <= n; ++j) putchar(c - j + 1);
        for (int j = n; j > i; --j) putchar(c - j + 1);
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 10343
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
