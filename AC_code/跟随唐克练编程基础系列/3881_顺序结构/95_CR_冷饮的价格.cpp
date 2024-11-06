#include <cstdio>
#include <cmath>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%.1f\n", (x ? 2.5 * (x - 1) : 0) + 1.5 * y);
    return 0;
}

/**************************************************************
	Problem: 22386
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
