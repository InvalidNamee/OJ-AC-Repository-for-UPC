#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define int long long

using namespace std;

signed main() {
    int a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    printf("%lld\n", max(a * b, c * d));
    return 0;
}

/**************************************************************
	Problem: 6501
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
