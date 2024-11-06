#include <cstdio>

int a[5000010];

int main() {
    int n, p, mn = 0x3f3f3f3f;
    scanf("%d%d", &n, &p);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = n; i; --i) a[i] -= a[i - 1];
    while (p--) {
        int l, r, v;
        scanf("%d%d%d", &l, &r, &v);
        a[l] += v, a[r + 1] -= v;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] += a[i - 1];
        mn = mn < a[i] ? mn : a[i];
    }
    printf("%d\n", mn);
    return 0;
}
/**************************************************************
	Problem: 22940
	Language: C++
	Result: 正确
	Time:615 ms
	Memory:20768 kb
****************************************************************/
