#include <cstdio>

int b[20];

int main() {
    int n, m, c;
    scanf("%d%d%d", &n, &m, &c);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int j = 0; j < m; ++j) {
            int t;
            scanf("%d", &t);
            s += t * b[j];
        }
        s += c;
        if (s > 0) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}