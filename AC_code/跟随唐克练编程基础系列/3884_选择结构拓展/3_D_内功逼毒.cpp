#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n, m;
    scanf("%d%d%d", &t, &n, &m);
    printf((n + m - 1) / m <= t ? "yes\n" : "no\n");
    return 0;
}
/**************************************************************
	Problem: 23549
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
