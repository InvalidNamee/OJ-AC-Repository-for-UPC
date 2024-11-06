#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) putchar(' ');
    for (int i = 0; i < n; ++i) putchar('*');
    putchar('\n');
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        putchar('*');
        for (int j = 1; j < n + i * 2 - 1; ++j) putchar(' ');
        putchar('*');
        putchar('\n');
    } 
    for (int i = n - 2; i; --i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        putchar('*');
        for (int j = 1; j < n + i * 2 - 1; ++j) putchar(' ');
        putchar('*');
        putchar('\n');
    } 
    for (int i = 1; i < n; ++i) putchar(' ');
    for (int i = 0; i < n; ++i) putchar('*');
    putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 22485
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
