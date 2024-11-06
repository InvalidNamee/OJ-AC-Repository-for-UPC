#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n = (n - 1) / 2 + 1;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < i; ++j) putchar(' ');
        putchar('X');
        for (int j = 0; j < (n - i - 1) * 2 - 1; ++j) putchar(' ');
        putchar('X');
        putchar('\n');
    }
    for (int j = 1; j < n; ++j) putchar(' ');
    putchar('X');
    putchar('\n');
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < i; ++j) putchar(' ');
        putchar('X');
        for (int j = 0; j < (n - i - 1) * 2 - 1; ++j) putchar(' ');
        putchar('X');
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 22483
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
