#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n, m, ans = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        ans = max(ans, min(t, m - t));
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 12602
	Language: C++
	Result: 正确
	Time:138 ms
	Memory:2220 kb
****************************************************************/
