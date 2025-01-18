#include <cstdio>
#include <iostream>

using namespace std;

int v[200010], w[200010];
int f[10010];

int main() {
    int n, m, k = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int _v, _w, s;
        scanf("%d%d%d", &_v, &_w, &s);
        if (!s) continue;
        int t = 1;
        do {
            v[++k] = _v * t;
            w[k] = _w * t;
            s -= t;
            t <<= 1;
        } while (s > t);
        if (s) v[++k] = _v * s, w[k] = _w * s;
    }
    for (int i = 1; i <= k; ++i) {
        for (int j = m; j >= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23896
	Language: C++
	Result: 正确
	Time:121 ms
	Memory:3824 kb
****************************************************************/