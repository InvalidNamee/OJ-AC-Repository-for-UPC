#include <cstdio>
#include <iostream>

using namespace std;

int v[20010], w[20010];
bool mark[20010];
int f[2010];

int main() {
    int n, m, k = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int _v, _w, s;
        scanf("%d%d%d", &_v, &_w, &s);
        if (s == -1) s = 1;
        else if (s == 0) mark[k + 1] = true, s = 1;
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
        if (!mark[i])
            for (int j = m; j >= v[i]; --j) {
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
        else
            for (int j = v[i]; j <= m; ++j) {
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23895
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2404 kb
****************************************************************/