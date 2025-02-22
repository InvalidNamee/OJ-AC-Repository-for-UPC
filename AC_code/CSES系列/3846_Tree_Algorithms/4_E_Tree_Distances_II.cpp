#include <iostream>
#include <vector>

using namespace std;

vector<int> ed[200010];
int cnt[200010];
long long f[200010], res[200010];

void dp(int x, int fa) {
    cnt[x] = 1;
    for (auto y : ed[x]) {
        if (y == fa) continue;
        dp(y, x);
        cnt[x] += cnt[y];
        f[x] += f[y] + cnt[y];
    }
}

void chrt(int x, int fa) {
    for (auto y : ed[x]) {
        if (y == fa) continue;
        int bk = f[y];
        f[y] += f[x] - f[y] - cnt[y] + cnt[1] - cnt[y];
        res[y] = f[y];
        chrt(y, x);
        f[y] = bk;
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
    chrt(1, 0);
    res[1] = f[1];
    for (int i = 1; i <= n; ++i) {
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23134
	Language: C++
	Result: 正确
	Time:169 ms
	Memory:32676 kb
****************************************************************/