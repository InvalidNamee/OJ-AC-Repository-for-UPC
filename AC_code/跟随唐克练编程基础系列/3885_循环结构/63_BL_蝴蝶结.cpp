#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n = (n - 1) / 2 + 1;
    for (int i = n; i; --i) {
        for (int j = 0; j < i; ++j) putchar('*');
        putchar('\n');
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < i; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 22484
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
