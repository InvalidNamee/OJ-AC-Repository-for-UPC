#include <cstdio>
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

struct Node {
    int l, r, w;

    bool operator <(const Node &t) const {
        return r == t.r ? l < t.l : r < t.r;
    }
} a[200010];
map<int, int> mp;
long long f[400010];

int main() {
    int n, m = 0;
    n = read();
    for (int i = 1; i <= n; ++i) {
        a[i].l = read(), a[i].r = read(), a[i].w = read();
        mp[a[i].l] = mp[a[i].r] = 1;
    }
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        it->second = ++m;
    }
    for (int i = 1; i <= n; ++i) {
        a[i].l = mp[a[i].l], a[i].r = mp[a[i].r];
    }
    sort(a + 1, a + n + 1);
    int t = 1;
    for (int i = 1; i <= m; ++i) {
        while (i == a[t].r) f[i] = max(f[i], f[a[t].l - 1] + a[t].w), t++;
        f[i] = max(f[i], f[i - 1]);
    }
    printf("%lld\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23065
	Language: C++
	Result: 正确
	Time:5873 ms
	Memory:26252 kb
****************************************************************/
