#include <iostream>
#include <vector>

using namespace std;

const int N = 200010;
long long tr[N];
int n, q;

void add(int u, int t) {
    for (int i = u; i <= n; i += i & -i) {
        tr[i] += t;
    }
}

long long query(int u) {
    long long res = 0;
    for (int i = u; i; i -= i & -i) {
        res += tr[i];
    }
    return res;
}

int s[N];
vector<int> ed[N];
int cnt[N], rnk[N], dfn[N], t;

void dfs(int x, int fa) {
    cnt[x] = 1;
    dfn[x] = ++t;
    rnk[t] = x;
    for (int y : ed[x]) {
        if (y == fa) continue;
        dfs(y, x);
        cnt[x] += cnt[y];
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; ++i) {
        add(dfn[i], s[i]);
    }
    while (q--) {
        int opt;
        cin >> opt;
        if (opt == 1) {
            int x, v;
            cin >> x >> v;
            add(dfn[x], v - s[x]);
            s[x] = v;
        }
        else {
            int x;
            cin >> x;
            cout << query(dfn[x] + cnt[x] - 1) - query(dfn[x] - 1) << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23139
	Language: C++
	Result: 正确
	Time:321 ms
	Memory:25732 kb
****************************************************************/