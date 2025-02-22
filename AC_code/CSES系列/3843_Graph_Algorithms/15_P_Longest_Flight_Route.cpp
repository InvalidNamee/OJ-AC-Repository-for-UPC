#include <iostream>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;

int head[100010], ne[200010], ver[200010], tot;
int pre[100010], dis[100010], indeg[200010];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    indeg[y]++;
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
    queue<int> q;
    memset(dis, -0x3f, sizeof(dis));
    dis[1] = 1;
    for (int i = 1; i <= n; ++i) {
        if (indeg[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y] < dis[x] + 1) {
                dis[y] = dis[x] + 1;
                pre[y] = x;
            }
            if (--indeg[y] == 0) {
                q.push(y);
            }
        }
    }
    if (dis[n] > 0) {
        int t = n;
        stack<int> st;
        while (t != 1) {
            st.push(t);
            t = pre[t];
        }
        cout << st.size() + 1 << endl;
        cout << 1 << ' ';
        while (!st.empty()) {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23090
	Language: C++
	Result: 正确
	Time:64 ms
	Memory:6300 kb
****************************************************************/