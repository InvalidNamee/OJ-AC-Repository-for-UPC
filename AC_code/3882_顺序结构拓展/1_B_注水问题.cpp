#include <cstdio>
#include <cmath>

int main() {
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    printf("%.2f\n", (1.0 - (double)t / a - (double)t / b) / (1.0 / a + 1.0 / b - 1.0 / c) + t);
    return 0;
}

/**************************************************************
	Problem: 23383
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
