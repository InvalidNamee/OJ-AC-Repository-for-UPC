#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int a[200010], b[200010];

int main() {
    int n, m, d;
    scanf("%d%d%d", &n, &m, &d);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &b[i]);
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    int l1 = 1, l2 = 1, ans = 0;
    while (l1 <= n && l2 <= m) {
        if (abs(a[l1] - b[l2]) <= d) {
            l1 ++, l2 ++;
            ans ++;
        }
        else {
            if (a[l1] > b[l2]) l2 ++;
            else l1 ++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23012
	Language: C++
	Result: 正确
	Time:1201 ms
	Memory:3588 kb
****************************************************************/
