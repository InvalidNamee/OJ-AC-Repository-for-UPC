#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n = (n - 1) / 2 + 1;
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = 1; j <= i; ++j) putchar('*');
        for (int j = 0; j < (n - i) * 2; ++j) putchar(' ');
        for (int j = 1; j <= i; ++j) putchar('*');
        putchar('\n');
    }
    for (int i = 0; i < 2 * n; ++i) putchar('*');
    putchar('\n');
    for (int i = n - 1; i; --i) {
        for (int j = 1; j <= i; ++j) putchar('*');
        for (int j = 0; j < (n - i) * 2; ++j) putchar(' ');
        for (int j = 1; j <= i; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 22482
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
