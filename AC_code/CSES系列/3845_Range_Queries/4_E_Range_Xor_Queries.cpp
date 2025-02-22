#include <cstdio>

int a[200010];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        a[i] ^= a[i - 1];
    }
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", a[r] ^ a[l - 1]);
    }
    return 0;
}
/**************************************************************
	Problem: 23115
	Language: C++
	Result: 正确
	Time:115 ms
	Memory:2020 kb
****************************************************************/