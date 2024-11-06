#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define int long long

using namespace std;

signed main() {
    int a, b;
    char op;
    scanf("%lld %c %lld", &a, &op, &b);
    if (op == '+') printf("%lld\n", a + b);
    else printf("%lld\n", a - b);
    return 0;
}

/**************************************************************
	Problem: 6495
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
