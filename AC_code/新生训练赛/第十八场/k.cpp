#include <cstdio>

bool da[210];
int d[210], cnt;

int main() {
    int a, b, k;
    scanf("%d%d%d", &a, &b, &k);
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) da[i] = true;
    }
    for (int i = 1; i <= b; ++i) {
        if (b % i == 0 && da[i]) d[++cnt] = i;
    }
    printf("%d\n", d[cnt - k + 1]);
    return 0;
}