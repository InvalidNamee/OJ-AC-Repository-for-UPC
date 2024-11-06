#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int mx(int a, int b, int c) {
    return max(abs(a - b), max(abs(a - c), abs(b - c)));
}

int a(int n, int m) {
    return min((n % 3 != 0) * m, (m % 3 != 0) * n);
}

int b(int n, int m) {
    return min(mx(n / 3 * m, (n - n / 3) * (m / 2), (n - n / 3) * (m - m / 2)), mx((n / 3 + 1) * m, (n - n / 3 - 1) * (m / 2), (n - n / 3 - 1) * (m - m / 2)));
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", min(a(n, m), min(b(n, m), b(m, n))));
    return 0;
}

/**************************************************************
	Problem: 6556
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
