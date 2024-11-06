#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    char x;
    cin >> n >> x;
    if (x == 'x') {
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - i; ++j) putchar(' ');
            for (int j = 0; j < i * 2 + 1; ++j) putchar('*');
            putchar('\n');
        }
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 1; j < n - i; ++j) putchar(' ');
            for (int j = 0; j < i * 2 + 1; ++j) putchar('*');
            putchar('\n');
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - i; ++j) putchar(' ');
            for (int j = 0; j <= i * 2; ++j) putchar('*');
            for (int j = 1; j < 2 * (n - i) - 1; ++j) putchar(' ');
            for (int j = 0; j <= i * 2; ++j) putchar('*');
            putchar('\n');
        }
    }
    return 0;
}

/**************************************************************
	Problem: 22481
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
