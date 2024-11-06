#include <cstdio>
#include <cmath>

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    int t = n - (y + x - 1) / x;
    printf("%d\n", t >= 0 ? t : 0);
    return 0;
}

/**************************************************************
	Problem: 8658
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
