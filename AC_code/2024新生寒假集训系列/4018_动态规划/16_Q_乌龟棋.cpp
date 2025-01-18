#include <cstdio>
#include <iostream>

using namespace std;

int f[41][41][41][41];
int val[360];
int cnt[5];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &val[i]);
    }
    for (int i = 1; i <= m; ++i) {
        int t;
        scanf("%d", &t);
        cnt[t]++;
    }
    f[0][0][0][0] = val[1];
    for (int i = 0; i <= cnt[1]; ++i) {
        for (int j = 0; j <= cnt[2]; ++j) {
            for (int k = 0; k <= cnt[3]; ++k) {
                for (int l = 0; l <= cnt[4]; ++l) {
                    int v = val[1 + i * 1 + j * 2 + k * 3 + l * 4];
                    if (i > 0) f[i][j][k][l] = max(f[i][j][k][l], f[i - 1][j][k][l] + v);
                    if (j > 0) f[i][j][k][l] = max(f[i][j][k][l], f[i][j - 1][k][l] + v);
                    if (k > 0) f[i][j][k][l] = max(f[i][j][k][l], f[i][j][k - 1][l] + v);
                    if (l > 0) f[i][j][k][l] = max(f[i][j][k][l], f[i][j][k][l - 1] + v);
                }
            }
        }
    }
    printf("%d\n", f[cnt[1]][cnt[2]][cnt[3]][cnt[4]]);
    return 0;
}
/**************************************************************
	Problem: 1769
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:13260 kb
****************************************************************/