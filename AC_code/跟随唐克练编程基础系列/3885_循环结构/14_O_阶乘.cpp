#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long ans = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) ans *= i;
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 20247
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
