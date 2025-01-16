#include <cstdio>
#include <iostream>

using namespace std;

int s1[1010][1010], s2[1010][1010];

int main() {
    int n, m, p, q;
    scanf("%d%d%d%d", &n, &m, &p, &q);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j & 1) scanf("%d", &s1[i][j]);
            else scanf("%d", &s2[i][j]);
            s1[i][j] += s1[i - 1][j] + s1[i][j - 1] - s1[i - 1][j - 1];
            s2[i][j] += s2[i - 1][j] + s2[i][j - 1] - s2[i - 1][j - 1];
        }
    }
    int res = 0;
    for (int i = p; i <= n; ++i) {
        for (int j = q; j <= m; ++j) {
            res = max(res, abs((s1[i][j] - s1[i - p][j] - s1[i][j - q] + s1[i - p][j - q]) - (s2[i][j] - s2[i - p][j] - s2[i][j - q] + s2[i - p][j - q])));
        }
    }
    printf("%d\n", res);
    return 0;
}