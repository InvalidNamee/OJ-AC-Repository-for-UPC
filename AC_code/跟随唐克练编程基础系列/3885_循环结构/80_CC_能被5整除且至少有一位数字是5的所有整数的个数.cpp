#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool check(int n) {
    if (n % 5 != 0) return false;
    while (n) {
        if (n % 10 == 5) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        ans += check(i);
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 22475
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
