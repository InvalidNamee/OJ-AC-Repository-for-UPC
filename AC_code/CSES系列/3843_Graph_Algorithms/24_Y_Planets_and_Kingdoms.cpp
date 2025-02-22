#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 100010, M = 200010;

vector<int> ed[N];
int dfn[N], low[N], id[N], cnt, t;
bool ins[N];
stack<int> st;


void tarjan(int x) {
    dfn[x] = low[x] = ++t;
    st.push(x);
    ins[x] = true;
    for (int y : ed[x]) {
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
        ++cnt;
        do {
            y = st.top();
            id[y] = cnt;
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
        ed[x].push_back(y);
    }
    for (int i = 1; i <= n; ++i) {
        if (!dfn[i]) {
            tarjan(i);
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; ++i) {
        cout << cnt - id[i] + 1 << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23099
	Language: C++
	Result: 正确
	Time:119 ms
	Memory:10632 kb
****************************************************************/