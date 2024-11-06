#include <cstdio>

typedef long long ll;

ll a[50010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    int q;
    scanf("%d", &q);
    while (q--) {
        int l, d;
        scanf("%d%d", &l, &d);
        printf("%lld\n", a[l + d - 1] - a[l - 1]);
    }
    return 0;
}
/**************************************************************
	Problem: 20520
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:1628 kb
****************************************************************/
