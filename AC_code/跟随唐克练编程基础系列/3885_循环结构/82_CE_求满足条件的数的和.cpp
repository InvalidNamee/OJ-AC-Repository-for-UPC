#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool check(int n) {
    int t = 0;
    if (n % 2 == 0) t++;
    if (n % 3 == 0) t++;
    if (n % 5 == 0) t++;
    if (n % 7 == 0) t++;
    return t >= 2;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) ans += i;
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 22473
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
