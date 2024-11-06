#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b, c, d;
    scanf("%d%d:%d%d:%d", &n, &a, &b, &c, &d);
    int t = c * 60 + d - a * 60 - b;
    printf("%d\n", (n + t - 1) / t);
    return 0;
}
/**************************************************************
	Problem: 22391
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
