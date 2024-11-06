#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool check(int n, int x) {
    while (n) {
        if (n % 10 == x) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int x, l, r, ans = 0;
    scanf("%d%d%d", &x, &l, &r);
    for (int i = l; i <= r; ++i) {
        ans += check(i, x);
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 22474
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
