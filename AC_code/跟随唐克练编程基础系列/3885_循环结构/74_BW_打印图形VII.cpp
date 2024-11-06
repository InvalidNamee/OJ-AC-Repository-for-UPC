#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n = (n - 1) / 2 + 1;
    for (int i = 1; i < n; ++i) putchar(' ');
    putchar('1');
    putchar('\n');
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        putchar('1' + i);
        for (int j = 1; j < 2 * i; ++j) putchar(' ');
        putchar('1' + i);
        putchar('\n');
    }
    for (int i = n - 2; i; --i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        putchar('1' + i);
        for (int j = 1; j < 2 * i; ++j) putchar(' ');
        putchar('1' + i);
        putchar('\n');
    }
    for (int i = 1; i < n; ++i) putchar(' ');
    putchar('1');
    putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 10395
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:2220 kb
****************************************************************/
