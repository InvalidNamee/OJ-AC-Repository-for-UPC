#include <cstdio>

int a[100010];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    while (q--) {
        int t;
        scanf("%d", &t);
        int l = 1, r = n;
        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] >= t) r = mid;
            else l = mid + 1;
        }
        if (a[l] == t) printf("%d ", l);
        else {
            printf("-1 -1\n");
            continue;
        }
        l = 1, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid] <= t) l = mid;
            else r = mid - 1;
        }
        printf("%d\n", l);
    }
    return 0;
}
/**************************************************************
	Problem: 22793
	Language: C++
	Result: 正确
	Time:19 ms
	Memory:1628 kb
****************************************************************/