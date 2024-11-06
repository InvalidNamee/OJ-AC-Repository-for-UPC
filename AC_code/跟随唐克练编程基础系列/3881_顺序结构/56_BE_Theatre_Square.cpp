#include <cstdio>

int main() {
    long long n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);
    printf("%lld\n", ((n + a - 1) / a) * ((m + a - 1) / a));
    return 0;
}
/**************************************************************
	Problem: 9685
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
