#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 200010;

struct Query{
    int l, r, id;
};

int a[N], v[N], ans[N], n;
map<int, int> mp;
vector<Query> qs;
int tr[N];

void modify(int u, int val) {
    for (; u <= n; u += u & -u) tr[u] += val;
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u) res += tr[u];
    return res;
}

int main() {
    int q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        mp[a[i]];
    }
    int m = 0;
    for (auto &i : mp) i.second = ++m;
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
    }
    for (int i = 0; i < q; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        qs.push_back({l, r, i});
    }
    sort(qs.begin(), qs.end(), [](Query a, Query b) {
        return a.r < b.r;
    });
    int t = 0;
    for (auto it : qs) {
        while (t < it.r) {
            ++t;
            if (v[a[t]]) modify(v[a[t]], -1);
            modify(v[a[t]] = t, 1);
        }
        ans[it.id] = query(it.r) - query(it.l - 1);
    }
    for (int i = 0; i < q; ++i) printf("%d\n", ans[i]);
    return 0;
}
/**************************************************************
	Problem: 23124
	Language: C++
	Result: 正确
	Time:277 ms
	Memory:18564 kb
****************************************************************/