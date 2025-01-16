#include <cstdio>
#include <map>

using namespace std;

int a[2010][2010][2];

int sum(int x1, int y1, int x2, int y2, int l) {
    return a[x2][y2][l] - a[x1][y2][l] - a[x2][y1][l] + a[x1][y1][l];
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        int x, y;
        char c[2];
        scanf("%d%d%s", &x, &y, c);
        a[x % (k * 2) + 1][y % (k * 2) + 1][c[0] == 'W']++;
    }
    for (int i = 1; i <= k * 2; ++i) {
        for (int j = 1; j <= k * 2; ++j) {
            for (int t = 0; t < 2; ++t) {
                a[i][j][t] += a[i - 1][j][t] + a[i][j - 1][t] - a[i - 1][j - 1][t];
            }
        }
    }
    // pian yi liang
    int res = 0;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            // printf("x + %d y + %d\n", i, j);
            for (int l = 0; l < 2; ++l) {
                int t1 = sum(k - i, k - j, 2 * k - i , 2 * k - j, l) + sum(2 * k - i, 2 * k - j, 2 * k, 2 * k, l) + sum(2 * k - i, 0, 2 * k, k - j, l) + sum(0, 2 * k - j, k - i, 2 * k, l) + sum(0, 0, k - i, k - j, l);
                int t2 = a[2 * k][2 * k][l ^ 1] - (sum(k - i, k - j, 2 * k - i , 2 * k - j, l ^ 1) + sum(2 * k - i, 2 * k - j, 2 * k, 2 * k, l ^ 1) + sum(2 * k - i, 0, 2 * k, k - j, l ^ 1) + sum(0, 2 * k - j, k - i, 2 * k, l ^ 1) + sum(0, 0, k - i, k - j, l ^ 1));
                // if (i == 999 && j == 0) {
                //     printf("%d %d %d %d %d\n", sum(k - i, k - j, 2 * k - i , 2 * k - j, l), sum(2 * k - i, 2 * k - j, 2 * k, 2 * k, l), sum(2 * k - i, 0, 2 * k, k - j, l), sum(0, 2 * k - j, k - i, 2 * k, l));
                // }
                res = max(res, t1 + t2);
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
/*
youshang : a[2k - i][2k - j][l] - a[k - i][2k - j][l] - a[2k - i][k - j][l] + a[k - i][k - j][l]
zuoxia : (a[2k][2k] - a[2k - i][2k] - a[2k - j][2k] + a[2k - i][2k - j]) + (a[k - i][k - j]) + (a[2k][k - j] - a[2k - i][k - j]) + (a[k - i][2k] - a[k - 1][2k - j])

*/