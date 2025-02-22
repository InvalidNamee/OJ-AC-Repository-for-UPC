#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int N = 200010;
set<int> f[N];
vector<int> ed[N];
int res[N];

void dp(int x, int fa) {
    for (int y : ed[x]) {
        if (y == fa) continue;
        dp(y, x);
        if (f[x].size() < f[y].size()) swap(f[x], f[y]);
        while (!f[y].empty()) {
            f[x].insert(*f[y].begin());
            f[y].erase(f[y].begin());
        }
    }
    res[x] = f[x].size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        f[i].insert(t);
    }
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dp(1, 0);
    for (int i = 1; i <= n; ++i) {
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23142
	Language: C++
	Result: 正确
	Time:387 ms
	Memory:54556 kb
****************************************************************/