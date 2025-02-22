#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> ed[100010];
stack<int> st;
bool vis[100010], inst[100010];

bool dfs(int x) {
    if (inst[x]) {
        st.push(x);
        stack<int> t;
        do {
            t.push(st.top());
            st.pop();
        } while (st.top() != x);
        t.push(x);
        cout << t.size() << endl;
        while (!t.empty()) {
            cout << t.top() << ' ';
            t.pop();
        }
        cout << endl;
        return true;
    }
    if (vis[x]) return false;
    st.push(x);
    vis[x] = true;
    inst[x] = true;
    for (int y : ed[x]) {
        if (dfs(y)) return true;
    }
    inst[x] = false;
    st.pop();
    return false;
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
        if (dfs(i)) return 0;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
/**************************************************************
	Problem: 23082
	Language: C++
	Result: 正确
	Time:65 ms
	Memory:28680 kb
****************************************************************/