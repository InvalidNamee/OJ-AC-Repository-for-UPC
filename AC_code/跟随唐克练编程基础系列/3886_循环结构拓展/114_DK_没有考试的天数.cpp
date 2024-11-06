#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int d = a * b / gcd(a, b), e = a * c / gcd(a, c), f = b * c / gcd(b, c);
    int g = d * c / gcd(c, d);
    printf("%d\n", n - (n / a) - (n / b) - (n / c) + (n / d) + (n / e) + (n / f) - (n / g));
    return 0;
}
/**************************************************************
	Problem: 21272
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
