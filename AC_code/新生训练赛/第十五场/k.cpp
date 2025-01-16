#include <cstdio>

bool mark[100010];
int p[10000], cnt;
int res[100010];

int main() {
    for (int i = 2; i <= 100000; ++i) {
        if (!mark[i]) {
            p[++cnt] = i;
            for (int j = 2; i * j <= 100000; ++j) {
                mark[i * j] = true;
            }
        }
    }
    for (int i = 1; i <= cnt; ++i) {
        p[i] += p[i - 1];
        for (int j = 0; j < i; ++j) {
            if (p[i] - p[j] <= 100000) res[p[i] - p[j]]++;
        }
    }
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        printf("%d\n", res[t]);
    }
    return 0;
}