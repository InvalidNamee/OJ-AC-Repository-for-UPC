#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <algorithm>
#define int long long

using namespace std;

inline int read() {
    char c = getchar();
    int res = 0;
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) {
        res = res * 10 + c - 48;
        c = getchar();
    }
    return res;
}

typedef long long ll;

int num[21];
ll f[21][10][2][2]; // 位数 尾数 是否前导零 是否相等

ll dp(ll x) {
    if (x == -1) return 0;
    memset(f, 0, sizeof(f));
    int m = 0;
    while (x) {
        num[++m] = x % 10;
        x /= 10;
    }
    f[m + 1][0][1][1] = 1;
    for (int i = m; i; --i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                if (j == k) {
                    if (j == 0) {
                        f[i][k][1][0] += f[i + 1][j][1][0];
                        f[i][k][1][0] += f[i + 1][j][1][1];
                    }
                    else continue;
                }
                else {
                    f[i][k][0][0] += f[i + 1][j][0][0] + f[i + 1][j][1][0];
                    if (k < num[i]) f[i][k][0][0] += f[i + 1][j][0][1] + f[i + 1][j][1][1];
                    if (k == num[i]) f[i][k][0][1] += f[i + 1][j][0][1] + f[i + 1][j][1][1];
                }
            }
        }
    }
    ll res = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                res += f[1][i][j][k];
            }
        }
    }
    return res;
}

signed main() {
    ll a, b;
    cin >> a >> b;
    cout << dp(b) - dp(a - 1) << endl;
    return 0;
}

/**************************************************************
	Problem: 23068
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/
