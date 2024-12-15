#include <cstdio>

int a[] = {1, 2, 3, 4, 5, 2, 7, 8};

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long b, k;
        scanf("%lld%lld", &b, &k);
        printf("%d\n", a[(b + 1) * k % 8]);
    }
    return 0;
}