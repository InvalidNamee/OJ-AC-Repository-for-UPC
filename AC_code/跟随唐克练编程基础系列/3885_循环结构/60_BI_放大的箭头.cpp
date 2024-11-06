#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (n - 1) / 2 + 1; ++i) {
        for (int j = 1; j < i; ++j) putchar(' ');
        for (int j = 1; j <= n; ++j) putchar('*');
        putchar('\n');
    }
    for (int i = (n - 1) / 2; i; --i) {
        for (int j = 1; j < i; ++j) putchar(' ');
        for (int j = 1; j <= n; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 22487
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
