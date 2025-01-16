#include <cstdio>
#include <cmath>

int main() {
    long long n, x;
    scanf("%lld", &n);
    x = (long long)floor(sqrt((double)n / 7 * 2 - 0.25) - 0.5);
    printf("%lld\n", x * 7 + (n - (x * (x + 1) / 2 * 7) + x) / (x + 1));
    return 0;
}

/*
x^2 + x + 1 / 4 = n / 7 * 2 - 1/4
(x + 1/2 )^2 = n / 7 * 2 - 1/4
x = sqrt(n / 7 * 2 - 1/4) - 1/2
*/
/**************************************************************
	Problem: 14074
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/