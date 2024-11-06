#include <cstdio>

int main() {
    int x, a, y, b;
    scanf("%d%d%d%d", &x, &a, &y, &b);
    printf("%.2f\n", (double)(y * b - x * a) / (b - a));
    return 0;
}

/**************************************************************
	Problem: 11583
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
