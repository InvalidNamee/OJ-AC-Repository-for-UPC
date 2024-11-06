#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

long long t[] = {0, 6, 6, 6, 6, 6, 4, 0};

int main() {
    long long n;
    scanf("%lld", &n);
    for (int i = 1; i <= 7; ++i) t[i] += t[i - 1];
    printf("%lld\n", 40LL * (n / 7 * t[6] + t[n % 7]));
    return 0;
}
/**************************************************************
	Problem: 12430
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
