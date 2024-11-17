#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

char mp[2010][2010];
bool v[2010][2010];
int n, m, tx, ty;

bool valid(int x, int y) {
    return !v[x][y] && x >= 0 && y >= 0 && x < n && y < m;
}

bool check(int mid) {
    memset(v, 0, sizeof(v));
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < m; ++i) {
        if (mp[n - 1][i] == 'X') {
            q.push({{n - 1, i}, mid});
            v[n - 1][i] = true;
        }
    }
    while (!q.empty()) {
        int x = q.front().first.first, y = q.front().first.second, lad = q.front().second;
        q.pop();
        if (x == tx && y == ty) return true;
        if (mp[x][y] == 'X') lad = mid;
        // up
        if (valid(x - 1, y) && lad) v[x - 1][y] = true, q.push({{x - 1, y}, lad - 1});
        // down
        if (valid(x + 1, y) && lad) v[x + 1][y] = true, q.push({{x + 1, y}, lad - 1});
        if (mp[x][y] == '.') continue;
        // left
        if (valid(x, y - 1) && mp[x][y - 1] == 'X') v[x][y - 1] = true, q.push({{x, y - 1}, mid});
        // right
        if (valid(x, y + 1) && mp[x][y + 1] == 'X') v[x][y + 1] = true, q.push({{x, y + 1}, mid});
    }
    return false;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%s", mp[i]);
    }
    scanf("%d%d", &tx, &ty);
    int l = 0, r = n;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}