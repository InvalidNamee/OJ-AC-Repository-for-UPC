#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

signed main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf(b - a == c - b ? "YES\n" : "NO\n");
    return 0;
}

/**************************************************************
	Problem: 6536
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
