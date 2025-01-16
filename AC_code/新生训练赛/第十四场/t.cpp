#include <cstdio>
#include <cmath>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, res = 0;
        scanf("%d", &n);
        m = n;
        int l = sqrt(n);
        for (int i = 2; i <= l; ++i) {
            if (n % i == 0) {
                res = i;
                while (n % i == 0) n /= i;
            }
        }
        if (n != 1) res = n;
        if (res == 0) printf("0\n");
        else printf("%d\n", m / res);
    }
    return 0;
}