#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010, M = 200010;

int fa[N], cnt[N];

int getfa(int x) {
    return x == fa[x] ? x : fa[x] = getfa(fa[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int tot = n, mx = 1;
    for (int i = 1; i <= n; ++i) fa[i] = i, cnt[i] = 1;
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        x = getfa(x), y = getfa(y);
        if (x != y) {
            fa[y] = x;
            cnt[x] += cnt[y];
            tot--;
            mx = max(mx, cnt[x]);
        }
        cout << tot << ' ' << mx << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23097
	Language: C++
	Result: 正确
	Time:93 ms
	Memory:3164 kb
****************************************************************/