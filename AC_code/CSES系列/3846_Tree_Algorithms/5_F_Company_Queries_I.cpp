#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> ed[200010];
int f[200010][20];

void dp(int x) {
    for (int i = 1; i < 20; ++i) {
        if (f[x][i - 1] == -1) break;
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (auto y : ed[x]) {
        f[y][0] = x;
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
    memset(f, -1, sizeof(f));
    dp(1);
    while (q--) {
        int x, k;
        cin >> x >> k;
        for (int i = 19; i >= 0; --i) {
            if (k >= (1 << i)) {
                k -= (1 << i);
                x = f[x][i];
                if (x == -1) break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23135
	Language: C++
	Result: 正确
	Time:185 ms
	Memory:38148 kb
****************************************************************/