#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

signed main() {
    int n;
    scanf("%lld", &n);
    printf("%lld\n", n * (n + 1) >> 1);
    return 0;
}

/**************************************************************
	Problem: 6454
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
