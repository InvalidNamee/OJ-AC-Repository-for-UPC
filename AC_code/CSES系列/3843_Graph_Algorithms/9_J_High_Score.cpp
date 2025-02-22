#include <cstdio>
#include <cstring>
#include <iostream>
 
using namespace std;
 
int ed[5010][3];
long long dis[2510];
bool mark[2510], v[2510];
int ver[5010], ne[5010], w[5010], head[2510], tot;

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    w[tot] = z;
    head[x] = tot;
}

bool dfs(int x) {
    if (v[x]) return true;
    v[x] = true;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (mark[y] || !dfs(y)) return false;;
    }
    return true;
}
 
int main() {
    memset(dis, -0x3f, sizeof(dis));
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d%d", ed[i], ed[i] + 1, ed[i] + 2);
    }
    dis[1] = 0;
    for (int k = 1; k < n; ++k) {
        for (int i = 1; i <= m; ++i) {
            if (dis[ed[i][1]] == -4485090715960753727 && dis[ed[i][0]] == -4485090715960753727) continue;
            if (dis[ed[i][1]] < dis[ed[i][0]] + ed[i][2]) {
                dis[ed[i][1]] = dis[ed[i][0]] + ed[i][2];
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        add(ed[i][1], ed[i][0], ed[i][2]);
        if (dis[ed[i][1]] == -4485090715960753727 && dis[ed[i][0]] == -4485090715960753727) continue;
        if (dis[ed[i][1]] < dis[ed[i][0]] + ed[i][2]) {
            mark[ed[i][0]] = mark[ed[i][1]] = true;
        }
    }
    printf("%lld\n", dfs(n) ? dis[n] : -1);
    return 0;
}
/**************************************************************
	Problem: 23078
	Language: C++
	Result: 正确
	Time:21 ms
	Memory:2372 kb
****************************************************************/