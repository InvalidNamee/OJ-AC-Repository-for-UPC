#include <cstdio>
#include <cmath>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n%.1f\n", (a + b + c), (double)(a + b + c) / 3);
    return 0;
}

/**************************************************************
	Problem: 22381
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
