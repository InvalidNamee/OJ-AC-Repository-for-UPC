#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j; --j) putchar('A' + n - j);
        for (int j = 0; j < (n - i) * 2; ++j) putchar(' ');
        for (int j = 1; j <= i; ++j) putchar('A' + n - j);
        putchar('\n');
    }
    for (int i = n - 1; i; --i) {
        for (int j = i; j; --j) putchar('A' + n - j);
        for (int j = 0; j < (n - i) * 2; ++j) putchar(' ');
        for (int j = 1; j <= i; ++j) putchar('A' + n - j);
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 10365
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2220 kb
****************************************************************/
