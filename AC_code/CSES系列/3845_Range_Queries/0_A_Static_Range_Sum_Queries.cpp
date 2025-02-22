#include <cstdio>

long long a[200010];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%lld\n", a[r] - a[l - 1]);
    }
    return 0;
}
/**************************************************************
	Problem: 23111
	Language: C++
	Result: 正确
	Time:109 ms
	Memory:2800 kb
****************************************************************/