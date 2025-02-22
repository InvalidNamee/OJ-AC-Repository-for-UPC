#include <iostream>

using namespace std;

int tr[1010][1010], mp[1010][1010];
int n, m;

void add(int u, int v, int w) {
    for (int x = u; x <= n; x += x & -x) {
        for (int y = v; y <= n; y += y & -y) {
            tr[x][y] += w;
        }
    }
}

int query(int u, int v) {
    int res = 0;
    for (int x = u; x; x -= x & -x) {
        for (int y = v; y; y -= y & -y) {
            res += tr[x][y];
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m;
    char c;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> c;
            mp[i][j] = c == '*';
            if (c == '*') add(i, j, 1);
        }
    }
    while (m--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y;
            cin >> x >> y;
            if (mp[x][y]) add(x, y, -1);
            else add(x, y, 1);
            mp[x][y] ^= 1;
        }
        else {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            cout << query(x2, y2) - query(x1 - 1, y2) - query(x2, y1 - 1) + query(x1 - 1, y1 - 1) << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23126
	Language: C++
	Result: 正确
	Time:171 ms
	Memory:10352 kb
****************************************************************/