#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

const int N = 100010;
int w[N], indeg[N];
vector<int> ed[N], ed2[N];
int dfn[N], low[N], id[N], t, cnt;
long long f[N], s[N];
bool ins[N];
stack<int> st;

void tarjan(int x) {
    dfn[x] = low[x] = ++t;
    ins[x] = true;
    st.push(x);
    for (int y : ed[x]) {
        if (!dfn[y]) {
            tarjan(y);
            low[x] = min(low[x], low[y]);
        }
        else if (ins[y]) {
            low[x] = min(low[x], dfn[y]);
        }
    }
    if (low[x] == dfn[x]) {
        int y;
        cnt++;
        do {
            y = st.top();
            st.pop();
            ins[y] = false;
            id[y] = cnt;
            s[cnt] += w[y];
        } while (y != x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> w[i];
    }
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
    }
    for (int i = 1; i <= n; ++i) {
        if (!dfn[i]) tarjan(i);
    }
    for (int x = 1; x <= n; ++x) {
        for (int y : ed[x]) {
            if (id[x] == id[y]) continue;
            else {
                indeg[id[y]]++;
                ed2[id[x]].push_back(id[y]);
            }
        }
    }
    queue<int> q;
    for (int i = 1; i <= cnt; ++i) {
        if (!indeg[i]) {
            f[i] = s[i];
            q.push(i);
        }
    }
    long long res = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        res = max(res, f[x]);
        for (int y : ed2[x]) {
            f[y] = max(f[y], f[x] + s[y]);
            if (--indeg[y] == 0) q.push(y);
        }
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 23101
	Language: C++
	Result: 正确
	Time:86 ms
	Memory:16148 kb
****************************************************************/