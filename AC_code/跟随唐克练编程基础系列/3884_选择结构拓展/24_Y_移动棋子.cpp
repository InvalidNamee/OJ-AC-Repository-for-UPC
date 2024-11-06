#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

signed main() {
    int x, y;
    scanf("%lld%lld", &x, &y);
    if (x * y < 0) printf("%lld\n", abs(x + y) + 1);
    else if (x < y) printf("%lld\n", y - x);
    else printf("%lld\n", x - y + 2 - (x == 0) - (y == 0));
    return 0;
}

/**************************************************************
	Problem: 22787
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
