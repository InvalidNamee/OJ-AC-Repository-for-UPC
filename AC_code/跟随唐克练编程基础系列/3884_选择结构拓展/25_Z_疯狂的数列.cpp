#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

signed main() {
    int n;
    scanf("%lld", &n);
    printf("%lld\n", n / 3 * 2 + max(0LL, n % 3 - 1));
    return 0;
}

/**************************************************************
	Problem: 21036
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
