#include <cstdio>

using namespace std;

int a[200010];

int main() {
    int n, x, ans = 0;
    long long s = 0;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int hh = 1, tt = 1; tt <= n; ++tt) {
        s += a[tt];
        while (hh <= tt && s > x) s -= a[hh++];
        if (s == x) ans++;
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 23035
	Language: C++
	Result: 正确
	Time:200 ms
	Memory:1900 kb
****************************************************************/
