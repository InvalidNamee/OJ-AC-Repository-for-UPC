#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) putchar('*'); putchar('\n');
    for (int i = n - 2; i; --i) {
        for (int j = 0; j < i; ++j) putchar(' ');
        putchar('*');
        putchar('\n');
    }
    for (int i = 1; i <= n; ++i) putchar('*'); putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 22490
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
