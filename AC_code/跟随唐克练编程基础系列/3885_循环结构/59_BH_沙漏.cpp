#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);
    n = (n - 1) / 2 + 1;
    for (int i = n - 1; i; --i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = 0; j < i * 2 + 1; ++j) putchar('*');
        putchar('\n');
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = 0; j < i * 2 + 1; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 22488
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
