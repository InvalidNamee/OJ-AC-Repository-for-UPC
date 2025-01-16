#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    while (q--) {
        int ql, qr, ll, rr, l = 0, r = n;
        scanf("%d%d", &ql, &qr);
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid] < ql) l = mid;
            else r = mid - 1;
        }
        ll = l;
        l = 0, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid] <= qr) l = mid;
            else r = mid - 1;
        }
        rr = r;
        printf("%d\n", rr - ll);
    }
    return 0;
}
/**************************************************************
	Problem: 3413
	Language: C++
	Result: 正确
	Time:107 ms
	Memory:1628 kb
****************************************************************/