#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <algorithm>

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

const int MOD = 1e9 + 7;
int f[1 << 10][1010];
bool v[1 << 10], a[1 << 10];

bool valid(int s, int n) {
    if (v[s]) return a[s];
    v[s] = true;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        if (s >> i & 1) {
            if (t & 1) return a[s] = false;
        }
        else t++;
    }
    return a[s] = !(t & 1);
}

int main() {
    int n = read(), m = read();
    f[0][0] = 1;
    for (int k = 1; k <= m; ++k) {
        for (int i = 0; i < (1 << n); ++i) {
            if (!f[i][k - 1]) continue;
            for (int j = 0; j < (1 << n); ++j) {
                if ((i & j) || !valid(i | j, n)) continue;
                f[j][k] += f[i][k - 1];
                f[j][k] %= MOD;
            }
        }
    }
    printf("%d\n", f[0][m]);
    return 0;
}
/**************************************************************
	Problem: 23067
	Language: C++
	Result: 正确
	Time:284 ms
	Memory:6264 kb
****************************************************************/
