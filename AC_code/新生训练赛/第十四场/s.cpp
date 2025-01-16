#include <cstdio>

const int MOD = 1000000007;
const int N = 200010;

int head[N], ne[N], ver[N], tot;
long long f[N][2];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int p;
        scanf("%d", &p);
        add(p, i);
    }

    return 0;
}