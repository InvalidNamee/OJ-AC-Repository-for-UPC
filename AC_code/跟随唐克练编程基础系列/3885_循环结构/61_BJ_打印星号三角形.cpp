#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = 0; j <= i * 2; ++j) putchar('*');
        for (int j = 1; j < 2 * (n - i) - 1; ++j) putchar(' ');
        for (int j = 0; j <= i * 2; ++j) putchar('*');
        for (int j = 1; j < 2 * (n - i) - 1; ++j) putchar(' ');
        for (int j = 0; j <= i * 2; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 22486
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
