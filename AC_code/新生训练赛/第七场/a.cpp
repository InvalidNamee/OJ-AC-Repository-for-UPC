#include <cstdio>

int main() {
    long long y, t;
    scanf("%lld%lld", &y, &t);
    if (t == 0) {
        printf("NO\nYES\n");
    }
    else {
        if (y < 0 && (t & 1)) printf("YES\n");
        else printf("NO\n");
        if (y % 2 != 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}