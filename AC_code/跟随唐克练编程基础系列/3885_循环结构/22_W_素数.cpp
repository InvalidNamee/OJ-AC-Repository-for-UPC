#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

bool PrimeJudge(long long n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long m, n;
    scanf("%lld%lld", &m, &n);
    long long ans = gcd(m, n) == 1 ? m + n : m * n;
    printf("%lld\n", ans);
    printf(PrimeJudge(ans) ? "YES\n" : "NO\n");
    return 0;
}

/**************************************************************
	Problem: 15382
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
