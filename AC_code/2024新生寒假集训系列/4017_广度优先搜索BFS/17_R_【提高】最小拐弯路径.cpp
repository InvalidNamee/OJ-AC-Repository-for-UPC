#include <cstdio>
#include <cstring>
#include <deque>

using namespace std;

struct Vertex {
    int x, y, dir;
};

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0}, dir[] = {0, 1, 0, 1};
int mp[1010][1010], dis[1010][1010][2];
bool vis[1010][1010][2];

int main() {
    int n, m;
    pair<int, int> s, t;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }
    scanf("%d%d%d%d", &s.first, &s.second, &t.first, &t.second);
    memset(dis, 0x3f, sizeof(dis));
    deque<Vertex> q;
    q.push_back({s.first, s.second, 0});
    q.push_back({s.first, s.second, 1});
    dis[s.first][s.second][0] = 0;
    dis[s.first][s.second][1] = 0;
    while (!q.empty()) {
        Vertex x = q.front();
        q.pop_front();
        if (vis[x.x][x.y][x.dir]) continue;
        vis[x.x][x.y][x.dir] = true;
        if (x.x == t.first && x.y == t.second) {
            printf("%d\n", dis[x.x][x.y][x.dir]);
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            Vertex y = x;
            y.x += dx[i], y.y += dy[i], y.dir = dir[i];
            if (y.x > 0 && y.x <= n && 0 < y.y && y.y <= m && !mp[y.x][y.y] && !vis[y.x][y.y][y.dir]) {
                int e = dir[i] ^ x.dir;
                if (dis[y.x][y.y][dir[i]] > dis[x.x][x.y][x.dir] + e) {
                    dis[y.x][y.y][dir[i]] = dis[x.x][x.y][x.dir] + e; 
                    if (e) q.push_back(y);
                    else q.push_front(y);
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23887
	Language: C++
	Result: 正确
	Time:6 ms
	Memory:15444 kb
****************************************************************/