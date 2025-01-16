#include <cstdio>

int a[130];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t, cnt = 0;
        scanf("%d", &t);
        for (int j = t + 1; j <= 120; ++j) {
            cnt += a[j];
        }
        a[t]++;
        printf("%d ", cnt);
    }
    printf("\n");
    return 0;
}