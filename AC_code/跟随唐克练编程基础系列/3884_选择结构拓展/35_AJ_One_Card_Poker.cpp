#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define int long long

using namespace std;

signed main() {
    int a, b;
    scanf("%lld%lld", &a, &b);
    if (a == 1) a += 13;
    if (b == 1) b += 13;
    if (a > b) printf("Alice\n");
    else if (a < b) printf("Bob\n");
    else printf("Draw\n");
    return 0;
}

/**************************************************************
	Problem: 6679
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
