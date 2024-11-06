#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int t = n, m = 0;
    m += t / 500 * 240;
    t %= 500;
    m += t / 300 * 120;
    printf("%d\n", n - m);
    return 0;
}
/**************************************************************
	Problem: 10256
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
