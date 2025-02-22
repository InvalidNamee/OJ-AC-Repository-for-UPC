#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 100010, M = 200010;
const int MOD = 1000000007;
int head[N], ver[M], ne[M], w[M], tot;
long long dis[N], f[N], mnt[N], mxt[N];
bool vis[N];

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    w[tot] = z;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        add(x, y, z);
    }
    memset(dis, 0x3f, sizeof(dis));
    memset(mnt, 0x3f, sizeof(mnt));
    dis[1] = mnt[1] = 0;
    f[1] = 1;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    q.push({0, 1});
    while (!q.empty()) {
        int x = q.top().second;
        q.pop();
        if (vis[x]) continue;
        vis[x] = true;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y] > dis[x] + w[i]) {
                dis[y] = dis[x] + w[i];
                f[y] = f[x];
                mnt[y] = mnt[x] + 1;
                mxt[y] = mxt[x] + 1;
                q.push({dis[y], y});
            }
            else if (dis[y] == dis[x] + w[i]) {
                f[y] = (f[y] + f[x]) % MOD;
                mnt[y] = min(mnt[y], mnt[x] + 1);
                mxt[y] = max(mxt[y], mxt[x] + 1);
            }
        }
    }
    cout << dis[n] << ' ' << f[n] << ' ' << mnt[n] << ' ' << mxt[n] << endl;
    return 0;
}
/**************************************************************
	Problem: 23092
	Language: C++
	Result: 正确
	Time:72 ms
	Memory:8344 kb
****************************************************************/