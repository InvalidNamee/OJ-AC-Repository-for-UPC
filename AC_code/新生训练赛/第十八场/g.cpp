#include <cstdio>
#include <cmath>

int cnt[100010], f[100010];

void printlist(int x) {
    int cnt = 0;
    int l = sqrt(x);
    for (int i = 2; i <= l; ++i) {
        while (x % i == 0) {
            // printf("%d ", i);
            cnt++;
            x /= i;
        }
    }
    if (x != 1) cnt++; printf("%d ", cnt);
    printf("\n");
}

int main() {
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) f[i]++;
        }
        if (f[i] > f[i - 1]) {
            cnt[i] = cnt[i - 1] + 1;
            printf("1\n");
        }
        else {
            f[i] = f[i] > f[i - 1] ? f[i] : f[i - 1];
            cnt[i] = cnt[i - 1];
            printf("0\n");
        }
        // printlist(i);
    }
    return 0;
}