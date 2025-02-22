#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct Node
{
    long long val;
    int x, t;
    
    bool operator <(const Node &_) const {
        return val > _.val;
    }
};

const int N = 100010;
const int M = 200010;
int head[N], ne[M], ver[M], w[M], tot;
long long dis[N][2];
bool vis[N][2];
priority_queue<Node> q;

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
    dis[1][0] = 0;
    q.push({dis[1][0], 1, 0});
    while (!q.empty()) {
        int x = q.top().x, t = q.top().t;
        q.pop();
        if (vis[x][t]) continue;
        vis[x][t] = true;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y][t] > dis[x][t] + w[i]) {
                dis[y][t] = dis[x][t] + w[i];
                q.push({dis[y][t], y, t});
            }
        }
        if (!t) {
            for (int i = head[x]; i; i = ne[i]) {
                int y = ver[i];
                if (dis[y][1] > dis[x][0] + w[i] / 2) {
                    dis[y][1] = dis[x][0] + w[i] / 2;
                    q.push({dis[y][1], y, 1});
                }
            }
        }
    }
    cout << dis[n][1] << endl;
    return 0;
}
/**************************************************************
	Problem: 23079
	Language: C++
	Result: 正确
	Time:74 ms
	Memory:13064 kb
****************************************************************/