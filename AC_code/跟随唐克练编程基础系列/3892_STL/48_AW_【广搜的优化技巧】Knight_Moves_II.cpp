#include <iostream>
#include <cstring>
#include <map>
#include <queue>
#include <cstdio>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, pii> piii;

bool v[300][300];
const int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
const int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

int d(pii a, pii b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

bool valid(pii a, int n) {
    return a.first >= 0 && a.second >= 0 && a.first < n && a.second < n;
}

bool visited(pii a) {
    return v[a.first][a.second];
}

void envisit(pii a) {
    v[a.first][a.second] = true;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        // priority_queue<piii, vector<piii>, greater<piii>> q;
        queue<pair<int, pii>> q;
        memset(v, 0, sizeof(v));
        int n;
        pii s, t;
        scanf("%d", &n);
        scanf("%d%d%d%d", &s.first, &s.second, &t.first, &t.second);
        // q.push({{d(s, t), 0}, s});
        q.push({0, s});
        envisit(s);
        int res = 0;
        while (!q.empty()) {
            pii x = q.front().second;
            int ds = q.front().first;
            if (x == t) {
                res = ds;
                break;
            }
            q.pop();
            for (int i = 0; i < 8; ++i) {
                pii y = x;
                y.first += dx[i], y.second += dy[i];
                if (!valid(y, n) || visited(y)) continue;
                envisit(y);
                // q.push({{d(t, y), ds + 1}, y});
                q.push({ds + 1, y});
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
/**************************************************************
	Problem: 8167
	Language: C++
	Result: 正确
	Time:154 ms
	Memory:2312 kb
****************************************************************/
