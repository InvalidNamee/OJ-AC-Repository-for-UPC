#include <cstdio>

int main() {
    int x, m, n;
    scanf("%d%d%d", &x, &m, &n);
    printf("%d\n", x * n + m * (n - 1) * n / 2);
    return 0;
}
/**************************************************************
	Problem: 1004
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
