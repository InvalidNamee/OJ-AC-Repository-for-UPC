#include <cstdio>
#include <bitset>
#include <iostream>

using namespace std;

typedef long long ll;

const int MOD = 1000000007;

ll f[110][9][1 << 7];

int main() {
    // freopen("input", "r", stdin);
    int h, w, k; // h w - 1
    scanf("%d%d%d", &h, &w, &k);
    for (int st = 0; st < (1 << w - 1); ++st) {
        if ((st << 1) & st) continue;
        f[1][(st & 1) + 1][st] = 1;
    }
    // printf("%lld\n", f[1][2][1]);
    for (int i = 2; i <= h; ++i) {
        for (int sti = 0; sti < (1 << w - 1); ++sti) { // 当前状态
            if ((sti << 1) & sti) continue; // invalid
            for (int j = 1; j <= w; ++j) { // 当前位置
                for (int stl = 0; stl < (1 << w - 1); ++stl) { // 前状态
                    if ((stl << 1) & stl) continue; // invalid
                    if (j - 2 >= 0 && (sti >> (j - 2) & 1)) f[i][j][sti] += f[i - 1][j - 1][stl];
                    else if (j - 1 >= 0 && (sti >> (j - 1) & 1)) f[i][j][sti] += f[i - 1][j + 1][stl];
                    else f[i][j][sti] += f[i - 1][j][stl];
                    f[i][j][sti] %= MOD;
                }
            }
        }
    }
    ll res = 0;
    for (int i = 0; i < (1 << w - 1); ++i) {
        res += f[h][k][i];
        // printf("f[%d][%d][%d] = %lld\n", h, k, i, f[h][k][i]);
        res %= MOD;
    }
    printf("%lld\n", res);
    return 0;
}

/*
00 01 10 11
f[1][1][00] = 1
f[1][2][01] = 1
f[1][1][10] = 1
f[2][1][00] = 1
f[2][1] 
*/