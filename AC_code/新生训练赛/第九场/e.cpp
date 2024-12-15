#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#define int long long

using namespace std;

signed main() {
    int n, m;
    scanf("%lld%lld", &m, &n);
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%lld", &a[i][j]);
            a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = i; k <= n; ++k) {
                for (int l = j; l <= m; ++l) {
                    mx = max(mx, a[k][l] - a[k][j] - a[i][l] + a[i][j]);
                }
            }
        }
    }
    printf("%lld\n", mx);
    return 0;
}