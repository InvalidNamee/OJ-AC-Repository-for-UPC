#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int a[] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    while (n) ans += a[n % 10], n /= 10;
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 21286
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2220 kb
****************************************************************/
