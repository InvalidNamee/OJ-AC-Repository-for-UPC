#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long s, c;
    scanf("%lld%lld", &s, &c);
    long long t = min(s, c / 2);
    s -= t, c -= t << 1;
    printf("%lld\n", t + (c >> 2));
    return 0;
}
/**************************************************************
	Problem: 6515
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
