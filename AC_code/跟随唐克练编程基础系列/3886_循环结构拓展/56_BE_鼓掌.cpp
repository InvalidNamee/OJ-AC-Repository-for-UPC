#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int x, y, n;
    scanf("%d%d%d", &x, &y, &n);
    printf("%d\n", n / x + n / y - n / (x * y / gcd(x, y)));
    return 0;
}
/**************************************************************
	Problem: 14072
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
