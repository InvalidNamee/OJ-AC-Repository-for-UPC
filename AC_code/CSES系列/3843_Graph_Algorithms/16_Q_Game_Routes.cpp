#include <iostream>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;

const int MOD = 1000000007;
int head[100010], ne[200010], ver[200010], tot;
int f[200010], indeg[200010];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    indeg[y]++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        add(x, y);
    }
    queue<int> q;
    f[1] = 1;
    for (int i = 1; i <= n; ++i) {
        if (indeg[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            f[y] = ((long long)f[y] + f[x]) % MOD;
            if (--indeg[y] == 0) {
                q.push(y);
            }
        }
    }
    cout << f[n] << endl;
    return 0;
}
/**************************************************************
	Problem: 23091
	Language: C++
	Result: 正确
	Time:45 ms
	Memory:6296 kb
****************************************************************/