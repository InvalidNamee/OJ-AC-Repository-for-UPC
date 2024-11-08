#include <cstdio>
#include <iostream>

using namespace std;

int f(int x) {
    int res = 0;
    while (x) {
        res = max(res, x % 10);
        x /= 10;
    }
    return res;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    while (n) {
        n -= f(n);
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23054
	Language: C++
	Result: 正确
	Time:69 ms
	Memory:2024 kb
****************************************************************/
