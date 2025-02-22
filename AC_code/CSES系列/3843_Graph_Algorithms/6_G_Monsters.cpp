#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>
#include <map>
#include <stack>
#include <iomanip>

using namespace std;

const int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, 1, -1};
map<char, int> inv = {
    {'U', 0}, {'D', 1}, {'R', 2}, {'L', 3}
};
const string dir = "UDRL";
int mp[1010][1010];
char d[1010][1010];
bool vis[1010][1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    int sx, sy;
    cin >> n >> m;
    queue<tuple<int, int, int>> q;
    memset(mp, 0x3f, sizeof(mp));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            char c;
            cin >> c;
            if (c == '#') mp[i][j] = -1;
            else if (c == 'A') sx = i, sy = j;
            else if (c == 'M') {
                mp[i][j] = 0;
                vis[i][j] = true;
                q.push({0, i, j});
            }
        }
    }
    while (!q.empty()) {
        auto [t, x, y] = q.front();
        q.pop();
        mp[x][y] = t;
        for (int i = 0; i < 4; ++i) {
            int tx = x + dx[i], ty = y + dy[i];
            if (0 < tx && tx <= n && 0 < ty && ty <= m && mp[tx][ty] != -1 && !vis[tx][ty]) {
                vis[tx][ty] = true;
                q.push({t + 1, tx, ty});
            }
        }
    }
    d[sx][sy] = 'W';
    q.push({0, sx, sy});
    while (!q.empty()) {
        auto [t, x, y] = q.front();
        q.pop();
        if (x == 1 || y == 1 || x == n || y == m) {
            cout << "YES" << endl;
            stack<char> st;
            if (sx != x || sy != y)
            do {
                char c = d[x][y];
                st.push(c);
                x -= dx[inv[c]], y -= dy[inv[c]];
            } while (sx != x || sy != y);
            cout << st.size() << endl;
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << endl;
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            int tx = x + dx[i], ty = y + dy[i];
            if (0 < tx && tx <= n && 0 < ty && ty <= m && mp[tx][ty] != -1 && !d[tx][ty] && t + 1 < mp[tx][ty]) {
                d[tx][ty] = dir[i];
                q.push({t + 1, tx, ty});
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
/**************************************************************
	Problem: 23075
	Language: C++
	Result: 正确
	Time:57 ms
	Memory:20592 kb
****************************************************************/