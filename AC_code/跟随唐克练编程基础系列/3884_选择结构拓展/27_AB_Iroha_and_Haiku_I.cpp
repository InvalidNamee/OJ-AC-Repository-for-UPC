#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

signed main() {
    int a[3];
    scanf("%lld%lld%lld", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    printf(a[0] == 5 && a[1] == 5 && a[2] == 7 ? "YES\n" : "NO\n");
    return 0;
}

/**************************************************************
	Problem: 6448
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
