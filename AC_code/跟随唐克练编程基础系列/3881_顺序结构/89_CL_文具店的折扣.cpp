#include <cstdio>
#include <cmath>

int main() {
    int x, y, n;
    scanf("%d%d%d", &x, &y, &n);
    printf("%.1f\n", (double)n - 0.9 * (x + y));
    return 0;
}

/**************************************************************
	Problem: 22380
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
