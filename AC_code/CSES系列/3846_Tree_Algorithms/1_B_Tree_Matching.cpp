#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int N = 200010;
int head[N], ne[N * 2], ver[N * 2], tot = 1;
int f[N][2];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dp(int x, int fa) {
    int s = 0;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa) continue;
        dp(y, x);
        f[x][0] += max(f[y][1], f[y][0]);
    }
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa) continue;
        f[x][1] = max(f[x][1], f[x][0] - max(f[y][1], f[y][0]) + f[y][0] + 1);
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
        add(x, y);
        add(y, x);
    }
    dp(1, 0);
    cout << max(f[1][0], f[1][1]) << endl;
    return 0;
}
/**************************************************************
	Problem: 23131
	Language: C++
	Result: 正确
	Time:78 ms
	Memory:22640 kb
****************************************************************/