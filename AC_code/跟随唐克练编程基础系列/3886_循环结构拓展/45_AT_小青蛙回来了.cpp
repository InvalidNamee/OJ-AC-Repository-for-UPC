#include <cstdio>

int main() {
    int m, n, h;
    scanf("%d%d%d", &m, &n, &h);
    printf("%d\n", 1 + (h - n - 1) / (m - n));
    return 0;
}
/**************************************************************
	Problem: 22531
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
