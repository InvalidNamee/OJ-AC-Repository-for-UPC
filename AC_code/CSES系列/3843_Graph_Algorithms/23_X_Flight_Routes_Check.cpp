#include <iostream>
#include <stack>

using namespace std;

const int N = 100010, M = 200010;

int head[N], ver[M], ne[M], tot;
int dfn[N], low[N], p[N], cnt, t;
bool ins[N];
stack<int> st;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void tarjan(int x) {
    dfn[x] = low[x] = ++t;
    st.push(x);
    ins[x] = true;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (!dfn[y]) {
            tarjan(y);
            low[x] = min(low[x], low[y]);
        }
        else if (ins[y]) {
            low[x] = min(low[x], low[y]);
        }
    }
    if (low[x] == dfn[x]) {
        int y;
        p[++cnt] = x;
        do {
            y = st.top();
            ins[y] = false;
            st.pop();
        } while (y != x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        add(x, y);
    }
    for (int i = 1; i <= n; ++i) {
        if (!dfn[i]) {
            tarjan(i);
        }
    }
    if (cnt == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl << p[cnt - 1] << ' ' << p[cnt] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23098
	Language: C++
	Result: 正确
	Time:51 ms
	Memory:13692 kb
****************************************************************/