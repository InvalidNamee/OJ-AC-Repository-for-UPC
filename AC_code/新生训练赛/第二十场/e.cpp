#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int t = (int)ceil(sqrt(0.25 + 2 * n) - 0.5);
    n -= t * (t - 1) >> 1;
    if (t & 1) printf("%d/%d\n", t + 1 - n, n);
    else printf("%d/%d\n", n, t + 1 - n);
    return 0;
}

/*
t + 1/2 = 2n+ 1/4
*/