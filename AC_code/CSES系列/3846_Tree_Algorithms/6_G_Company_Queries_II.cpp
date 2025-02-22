#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> ed[200010];
int f[200010][20], dep[200010];

void dp(int x) {
    for (int i = 1; i < 20; ++i) {
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (auto y : ed[x]) {
        f[y][0] = x;
        dep[y] = dep[x] + 1;
        dp(y);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 2; i <= n; ++i) {
        int fa;
        cin >> fa;
        ed[fa].push_back(i);
    }
    dep[1] = 1;
    dp(1);
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (dep[x] < dep[y]) swap(x, y);
        for (int i = 19; i >= 0; --i) {
            if (dep[f[x][i]] >= dep[y]) x = f[x][i];
        }
        if (x != y) {
            for (int i = 19; i >= 0; --i) {
                if (f[x][i] != f[y][i]) {
                    x = f[x][i], y = f[y][i];
                }
            }
            x = f[x][0];
        }
        cout << x << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23136
	Language: C++
	Result: 正确
	Time:295 ms
	Memory:42056 kb
****************************************************************/