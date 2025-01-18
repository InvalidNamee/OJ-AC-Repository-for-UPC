#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

vector<int> v, w;
vector<int> f;

int main() {
    int n, m, k = 0;
    scanf("%d%d", &n, &m);
    f = vector<int>(m + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int _v, _w, s;
        scanf("%d%d%d", &_v, &_w, &s);
        if (s == 0) continue;
        int t = 1;
        do {
            v.push_back(_v * t);
            w.push_back(_w * t);
            s -= t;
            t <<= 1;
        } while (s > t);
        if (s) v.push_back(_v * s), w.push_back(_w * s);
    }
    for (int i = 0; i < v.size(); ++i) {
        for (int j = m; j >= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23908
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2220 kb
****************************************************************/