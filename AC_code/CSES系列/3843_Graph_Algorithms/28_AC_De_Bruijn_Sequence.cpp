#include <iostream>
#include <vector>

using namespace std;

vector<int> ed[1 << 14];
vector<int> path;
int dis[1 << 14];

void dfs(int x) {
    // cout << x << endl;
    int y;
    while (!ed[x].empty()) {
        y = ed[x].back();
        ed[x].pop_back();
        dfs(y);
    }
    path.push_back(x & 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    if (n == 1) {
        cout << 10 << endl;
        return 0;
    }
    for (int i = 0; i < (1 << n - 1); ++i) {
        ed[i].push_back((i << 1 | 1) & (1 << (n - 1)) - 1);
        // cout << i << ' ' << ((i << 1 | 1) & (1 << (n - 1)) - 1) << endl;
        ed[i].push_back((i << 1) & (1 << (n - 1)) - 1);
        // cout << i << ' ' << ((i << 1) & (1 << (n - 1)) - 1) << endl;
    }
    dfs(0);
    for (int i = 2; i < n; ++i) cout << 0;
    for (int i = path.size() - 1; i >= 0; --i) cout << path[i];
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 23103
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:5680 kb
****************************************************************/