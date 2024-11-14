#include <cstdio>

int a[200010], p[200010];

int main() {
    int n, t = 1, ans = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        p[a[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        if (p[i - 1] >= p[i]) ans ++;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23020
	Language: C++
	Result: 正确
	Time:101 ms
	Memory:2680 kb
****************************************************************/
