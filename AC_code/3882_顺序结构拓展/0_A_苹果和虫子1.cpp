#include <cstdio>
#include <cmath>

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    printf("%d\n", n - (y + x - 1) / x);
    return 0;
}

/**************************************************************
	Problem: 23384
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
