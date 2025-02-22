#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 100010;

vector<int> ed[N * 2];
int dfn[N * 2], low[N * 2], id[N * 2], cnt, t;
bool ins[N * 2];
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
            low[x] = min(low[x], low[y]);
        }
    }
    if (dfn[x] == low[x]) {
        int y;
        cnt++;
        do {
            y = st.top();
            st.pop();
            ins[y] = false;
            id[y] = cnt;
        } while (y != x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        char c;
        bool f1, f2;
        int x, y;
        cin >> c >> x;
        f1 = c == '-';
        cin >> c >> y;
        f2 = c == '-';
        // cout << x + (!f1) * n << ' ' << y + f2 * n << endl;
        // cout << y + (!f2) * n << ' ' << x + f1 * n << endl;
        ed[x + (!f1) * n].push_back(y + f2 * n);
        ed[y + (!f2) * n].push_back(x + f1 * n);
    }
    for (int i = 1; i <= n + n; ++i) {
        if (!dfn[i]) tarjan(i);
    }
    for (int i = 1; i <= n; ++i) {
        if (id[i] == id[i + n]) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << (id[i] < id[i + n] ? '+' : '-') << ' ';
    }
    cout << endl; 
    return 0;
}
/**************************************************************
	Problem: 23100
	Language: C++
	Result: 正确
	Time:82 ms
	Memory:32104 kb
****************************************************************/