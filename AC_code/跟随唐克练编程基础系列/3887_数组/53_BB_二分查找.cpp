#include <cstdio>

int a[10010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; ++i) {
        int q;
        scanf("%d", &q);
        int l = 1, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid] <= q) l = mid;
            else r = mid - 1;
        }
        printf(a[l] == q ? "YES\n" : "NO\n");
    }
    return 0;
}
/**************************************************************
	Problem: 9830
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/
