#include <cstdio>

int a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
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
        else printf("-1\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22790
	Language: C++
	Result: 正确
	Time:51 ms
	Memory:1628 kb
****************************************************************/