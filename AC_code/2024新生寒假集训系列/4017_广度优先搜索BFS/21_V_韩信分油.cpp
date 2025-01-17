#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

bool vis[1000000];

int main() {
    int v[3], s;
    scanf("%d%d%d", &v[0], &v[1], &v[2]);
    s = v[0] + 1;
    if (v[0] & 1) {
        printf("NO\n");
        return 0;
    }
    queue<pair<int, int>> q;
    vis[v[0] * s * s] = true;
    q.push({0, v[0] * s * s});
    while (!q.empty()) {
        int l = q.front().first, a[] = {q.front().second / (s * s), q.front().second / s % s, q.front().second % s};
        q.pop();
        if (a[0] == 0 && a[1] == a[2] || a[1] == 0 && a[0] == a[2] || a[2] == 0 && a[0] == a[1]) {
            printf("%d\n", l);
            return 0;
        }
        // i -> j
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == j) continue;
                int b[3];
                memcpy(b, a, sizeof(a));
                int t = min(v[j] - a[j], a[i]);
                if (!t) continue;
                b[j] += t, b[i] -= t;
                if (!vis[b[0] * s * s + b[1] * s + b[2]]) {
                    vis[b[0] * s * s + b[1] * s + b[2]] = true;
                    q.push({l + 1, b[0] * s * s + b[1] * s + b[2]});
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
/**************************************************************
	Problem: 11522
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2340 kb
****************************************************************/