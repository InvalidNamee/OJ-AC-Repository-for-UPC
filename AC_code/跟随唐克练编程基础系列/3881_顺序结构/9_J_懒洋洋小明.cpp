#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", ((a % 10) + (b % 10)) % 10);
    return 0;
}
/**************************************************************
	Problem: 1092
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
