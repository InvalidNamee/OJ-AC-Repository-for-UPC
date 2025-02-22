#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010, M = 200010;

struct Node {
    int x, y, w;

    bool operator <(const Node &_) const {
        return w < _.w;
    }
} ed[M];
int fa[N];

int getfa(int x) {
    return x == fa[x] ? x : fa[x] = getfa(fa[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) fa[i] = i;
    for (int i = 1; i <= m; ++i) {
        cin >> ed[i].x >> ed[i].y >> ed[i].w;
    }
    sort(ed + 1, ed + m + 1);
    int cnt = 0;
    long long res = 0;
    for (int i = 1; i <= m; ++i) {
        int x = getfa(ed[i].x), y = getfa(ed[i].y);
        if (x != y) {
            cnt++;
            res += ed[i].w;
            fa[y] = x;
        }
    }
    if (cnt == n - 1) cout << res << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}
/**************************************************************
	Problem: 23096
	Language: C++
	Result: 正确
	Time:84 ms
	Memory:5120 kb
****************************************************************/