#include <iostream>
#include <vector>

using namespace std;

vector<int> ed[200010];
int f[200010], res;

void dp(int x, int fa) {
    for (auto y : ed[x]) {
        if (y == fa) continue;
        dp(y, x);
        res = max(res, f[x] + f[y] + 1);
        f[x] = max(f[x], f[y] + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dp(1, 0);
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 23132
	Language: C++
	Result: 正确
	Time:127 ms
	Memory:29556 kb
****************************************************************/