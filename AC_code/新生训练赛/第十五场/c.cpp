#include <cstdio>

int to[1010];
bool vis[1010];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int dfs(int x) {
    if (vis[x]) return 0;
    vis[x] = true;
    return 1 + dfs(to[x]);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &to[i]);
    }
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            int t = dfs(i);
            res = (long long)res * t / gcd(res, t);
        }
    }
    printf("%d\n", res);
    return 0;
}