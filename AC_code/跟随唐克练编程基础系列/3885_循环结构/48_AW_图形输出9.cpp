#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) putchar(' ');
        for (int j = 0; j < 2 * i + 3; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 22499
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
