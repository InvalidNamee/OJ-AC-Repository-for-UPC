#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n++;
    for (int i = 0; i < n - 1; ++i) putchar(' ');
    putchar('*');
    putchar('\n');
    for (int i = n - 2; i; --i) {
        for (int j = 0; j < i; ++j) putchar(' ');
        putchar('*');
        for (int j = 0; j < (n - i - 1) * 2 - 1; ++j) putchar(' ');
        putchar('*');
        putchar('\n');
    }
    for (int i = 0; i < 2 * n - 1; ++i) putchar('*');
    putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 13911
	Language: C++
	Result: 正确
	Time:44 ms
	Memory:2220 kb
****************************************************************/
