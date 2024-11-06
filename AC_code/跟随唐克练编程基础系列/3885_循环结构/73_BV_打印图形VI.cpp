#include <cstdio>
#include <cstring>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) putchar(' ');
        for (int j = i; j >= 0; --j) putchar('A' + j);
        for (int j = 1; j <= i; ++j) putchar('A' + j);
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 10386
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
