#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int d = n - a - b - c;
    printf("%d %s\n", abs(d), d >= 0 ? "YES" : "NO");
    return 0;
}
/**************************************************************
	Problem: 22412
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
