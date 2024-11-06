#include <cstdio>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int poww(int n, int p) {
    int res = 1, t = n;
    while (p) {
        if (p & 1) res *= t;
        t *= t;
        p >>= 1;
    }
    return res;
}

int pws(int n, int p) {
    int s = 0;
    while (n) {
        s += poww(n % 10, p);
        n /= 10;
    }
    return s;
}

int a[210], m;
int b[210], l;
bool mark[210];
map<int, int> mp;

int main() {
    int n, t;
    scanf("%d", &n);
    while (scanf("%d", &t) != EOF) {
        a[++m] = t;
        mp[t] = m;
    }
    for (int j = 0; j < n; ++j) {
        vector<int> tmp;
        for (int i = 1; i <= m; ++i) {
            if (mark[i]) continue;
            int res = pws(a[i], j + 2);
            if (mp.find(res) != mp.end()) tmp.push_back(mp[res]);
        }
        for (auto i : tmp) mark[i] = true;
    }
    for (int i = 1; i <= m; ++i) {
        if (!mark[i]) b[++l] = a[i];
    }
    sort(b + 1, b + l + 1);
    for (int i = 1; i <= l; ++i) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 11602
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1372 kb
****************************************************************/
