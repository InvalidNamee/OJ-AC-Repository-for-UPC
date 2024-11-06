#include <cstdio>
#include <cstring>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = 0; j <= i; ++j) putchar('A' + n - 1 - j);
        for (int j = i - 1; j >= 0; --j) putchar('A' + n - 1 - j);
        putchar('\n');
    }
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = 0; j <= i; ++j) putchar('A' + n - 1 - j);
        for (int j = i - 1; j >= 0; --j) putchar('A' + n - 1 - j);
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 10376
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
