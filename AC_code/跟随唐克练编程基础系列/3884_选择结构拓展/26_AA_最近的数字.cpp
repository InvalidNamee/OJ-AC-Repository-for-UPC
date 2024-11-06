#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

signed main() {
    int n, d;
    scanf("%lld%lld", &n, &d);
    int t1 = n / d * d, t2 = t1 + d;
    if (n - t1 == t2 - n) printf("%lld\n%lld\n", t1, t2);
    else if (n - t1 < t2 - n) printf("%lld\n", t1);
    else printf("%lld\n", t2);
    return 0;
}

/**************************************************************
	Problem: 23544
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
