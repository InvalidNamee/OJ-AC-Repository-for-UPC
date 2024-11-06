#include <cstdio>
#include <iostream>

using namespace std;

int a[100010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int ans, s = 0;
    for (int i = 2; i <= m; ++i) {
        s += abs(a[i] - a[i - 1]);
    }
    ans = s;
    for (int i = m + 1; i <= n; ++i) {
        s += abs(a[i] - a[i - 1]) - abs(a[i - m + 1] - a[i - m]);
        ans = min(ans, s);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 14261
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2612 kb
****************************************************************/
