#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, lst = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (t != lst) ans++;
        lst = t;
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 13206
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2220 kb
****************************************************************/
