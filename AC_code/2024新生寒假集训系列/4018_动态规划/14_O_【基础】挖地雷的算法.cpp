#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;

int head[210], ver[20210], w[20210], ne[20210], tot;
int indeg[210];
int dis[210], pre[210], cnt[210];

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    w[tot] = z;
    indeg[y]++;
}

void print(int x) {
    if (pre[x] == 0) {
        printf("%d", x);
        return;
    }
    print(pre[x]);
    printf("-%d", x);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &cnt[i]);
    }
    int x, y;
    while (scanf("%d%d", &x, &y), x && y) {
        add(x, y, cnt[y]);
    }
    for (int i = 1; i <= n; ++i) {
        if (indeg[i] == 0) add(0, i, cnt[i]);
    }
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y] < dis[x] + w[i]) dis[y] = dis[x] + w[i], pre[y] = x;
            --indeg[y];
            if (!indeg[y]) q.push(y);
        }
    }
    int p = 0;
    for (int i = 1; i <= n; ++i) {
        if (dis[i] > dis[p]) p = i;
    }
    print(p);
    printf("\n%d\n", dis[p]);
    return 0;
}
/**************************************************************
	Problem: 23891
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2468 kb
****************************************************************/