#include <cstdio>
#include <queue>

using namespace std;

int s[210];
bool vis[210];

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
    }
    queue<pair<int, int>> q;
    q.push({0, a});
    vis[a] = true;
    while (!q.empty()) {
        int x = q.front().second, l = q.front().first;
        q.pop();
        if (x == b) {
            printf("%d\n", l);
            return 0;
        }
        if (x + s[x] <= n && !vis[x + s[x]]) vis[x + s[x]] = true, q.push({l + 1, x + s[x]});
        if (x - s[x] > 0 && !vis[x - s[x]]) vis[x - s[x]] = true, q.push({l + 1, x - s[x]});
    }
    printf("-1\n");
    return 0;
}
/**************************************************************
	Problem: 1525
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/