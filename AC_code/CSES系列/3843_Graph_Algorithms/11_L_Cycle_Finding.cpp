#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

const int N = 2510, M = 5010;
struct Node {
    int x, y, w;
} ed[M];
long long dis[N];
int pre[N];
bool vis[N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> ed[i].x >> ed[i].y >> ed[i].w;
    }
    for (int T = 1; T <= n; ++T) {
        for (int i = 1; i <= m; ++i) {
            if (dis[ed[i].y] > dis[ed[i].x] + ed[i].w) {
                dis[ed[i].y] = dis[ed[i].x] + ed[i].w;
                pre[ed[i].y] = ed[i].x;
                if (T == n) {
                    cout << "YES" << endl;
                    stack<int> st;
                    int t = ed[i].y;
                    for (int j = 1; j <= n; ++j) {
                        t = pre[t];
                    }
                    do {
                        st.push(t);
                        vis[t] = true;
                        t = pre[t];
                    } while (!vis[t]);
                    st.push(t);
                    while (!st.empty()) {
                        cout << st.top() << ' ';
                        st.pop();
                    }
                    cout << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
/**************************************************************
	Problem: 23080
	Language: C++
	Result: 正确
	Time:86 ms
	Memory:2472 kb
****************************************************************/