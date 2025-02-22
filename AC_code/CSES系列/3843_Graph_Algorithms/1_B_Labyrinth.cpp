#include <cstdio>
#include <queue>
#include <iostream>
#define x first
#define y second

using namespace std;

typedef pair<int, int> pii;
const int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
const char d[] = {'R', 'L', 'D', 'U'};
bool mp[1010][1010], vis[1010][1010];
pii pre[1010][1010];
char pre_d[1010][1010];
int n, m;
pii s, t;
queue<pii> q;

bool valid(int x, int y) {
    return x <= n && y <= m && x > 0 && y > 0 && mp[x][y];
}

void print_ans(pii x, int d) {
    if (pre[x.x][x.y] == make_pair(0, 0)) {
        printf("%d\n", d);
        return;
    }
    print_ans(pre[x.x][x.y], d + 1);
    putchar(pre_d[x.x][x.y]);
}

int main() {
    scanf("%d%d", &n, &m);
    getchar();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            char c = getchar();
            if (c == 'A') s.first = i, s.second = j, mp[i][j] = true;
            else if (c == 'B') t.first = i, t.second = j, mp[i][j] = true;
            else if (c == '.') mp[i][j] = true;
        }
        getchar();
    }
    q.push(s);
    vis[s.x][s.y] = true;
    while (!q.empty()) {
        pii u = q.front();
        q.pop();
        if (u == t) {
            printf("YES\n");
            print_ans(u, 0);
            printf("\n");
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            pii v = {u.x + dx[i], u.y + dy[i]};
            if (valid(v.x, v.y) && !vis[v.x][v.y]) {
                vis[v.x][v.y] = true;
                q.push(v);
                pre[v.x][v.y] = {u.x, u.y};
                pre_d[v.x][v.y] = d[i];
            }
        }
    }
    printf("NO\n");
    return 0;
}
/**************************************************************
	Problem: 23070
	Language: C++
	Result: 正确
	Time:55 ms
	Memory:28688 kb
****************************************************************/