#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

inline int read() {
    char c = getchar();
    int res = 0;
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) {
        res = res * 10 + c - 48;
        c = getchar();
    }
    return res;
}

int ver[400010], ne[400010], w[400010], head[200010], tot;
long long dis[200010];
bool v[200010];

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    w[tot] = z;
    head[x] = tot;
}

void dijkstra(int s) {
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;
    q.push({dis[s], s});
    while (!q.empty()) {
        int x = q.top().second;
        q.pop();
        if (v[x]) continue;
        v[x] = true;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y] > dis[x] + w[i]) {
                dis[y] = dis[x] + w[i];
                q.push({dis[y], y});
            }
        }
    }
}

int main() {
    int n = read(), m = read();
    for (int i = 1; i <= m; ++i) {
        int x = read(), y = read(), z = read();
        add(x, y, z);
    }
    dijkstra(1);
    for (int i = 1; i <= n; ++i) {
        printf("%lld ", dis[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 23076
	Language: C++
	Result: 正确
	Time:53 ms
	Memory:12608 kb
****************************************************************/