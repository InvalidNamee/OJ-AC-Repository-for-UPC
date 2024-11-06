#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int a[100010], b[100010], n, m;

int search_r(int val) {
    int l = 0, r = n;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (val > a[mid]) l = mid;
        else r = mid - 1;
    }
    // printf("search_r %d = %d\n", val, l);
    return l;
}

int search_l(int val) {
    int l = 1, r = n + 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (val < a[mid]) r = mid;
        else l = mid + 1;
    }
    // printf("search_l %d = %d\n", val, l);
    return l;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= m; ++i) {
            scanf("%d", &b[i]);
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + m + 1);
        b[m + 1] = __INT_MAX__;
        int res = 0;
        for (int i = 1; i <= m + 1; ++i) {
            res = max(res, 1 + search_r(b[i]) - search_l(b[i - 1]));
        }
        if (res) printf("%d\n", res);
        else printf("Impossible\n");
    }
    return 0;
}
/**************************************************************
	Problem: 21347
	Language: C++
	Result: 正确
	Time:8 ms
	Memory:2024 kb
****************************************************************/
