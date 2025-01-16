#include <cstdio>
#include <algorithm>

using namespace std;

int a[200010], b[200010];

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &b[i]);
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    int cnt = 0;
    for (int i = 1, j = 1; i <= m; ++i) {
        while (b[i] > a[j] + k && j <= n) j++;
        // printf("%d %d\n", i, j);
        if (j > n) break;
        if (b[i] >= a[j] - k) cnt++, j++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23012
	Language: C++
	Result: 正确
	Time:91 ms
	Memory:2800 kb
****************************************************************/