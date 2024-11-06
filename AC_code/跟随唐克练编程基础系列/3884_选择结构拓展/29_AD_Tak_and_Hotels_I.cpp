#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, x, y;
    scanf("%d%d%d%d", &n, &k, &x, &y);
    if (n <= k) printf("%d\n", n * x);
    else printf("%d\n", (n - k) * y + k * x);
    return 0;
}
/**************************************************************
	Problem: 6459
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
