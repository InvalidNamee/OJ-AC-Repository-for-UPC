#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) putchar(' ');
        for (int j = i; j <= n; ++j) putchar('A' + j - 1);
        for (int j = n - 1; j >= i; --j) putchar('A' + j - 1);
        putchar('\n');
    }
    for (int i = n - 1; i; --i) {
        for (int j = 1; j < i; ++j) putchar(' ');
        for (int j = i; j <= n; ++j) putchar('A' + j - 1);
        for (int j = n - 1; j >= i; --j) putchar('A' + j - 1);
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 10350
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
