#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

const int MOD = 1000000007;
vector<int> ed[20];
int f[20][1 << 20];
bool vis[20][1 << 20];

void dp(int x, int mask) {
    vis[x][mask] = true;
    for (int y : ed[x]) {
        if (mask >> y & 1) {
            if (!vis[y][mask ^ (1 << x)]) dp(y, mask ^ (1 << x));
            f[x][mask] = (f[x][mask] + f[y][mask ^ (1 << x)]) % MOD;
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        if (x != y) ed[y].push_back(x);
    }
    f[0][1] = 1;
    vis[0][1] = true;
    dp(n - 1, (1 << n) - 1);
    printf("%d\n", f[n - 1][(1 << n) - 1]);
    return 0;
}
/**************************************************************
	Problem: 23105
	Language: C++
	Result: 正确
	Time:1047 ms
	Memory:104620 kb
****************************************************************/