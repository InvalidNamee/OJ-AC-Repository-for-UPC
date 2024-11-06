#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    n /= 10;
    printf("%d\n", n + n / 5 * 2 + n % 5 / 3);
    return 0;
}

/**************************************************************
	Problem: 6105
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1236 kb
****************************************************************/
