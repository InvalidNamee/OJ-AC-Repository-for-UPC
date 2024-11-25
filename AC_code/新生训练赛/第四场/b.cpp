#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    long long x = -2ll * (n / 4), y = -2ll * (n / 4);
    if (n % 4 == 1) {
        x += n;
    }
    else if (n % 4 == 2) {
        x += n - 1;
        y += n;
    }
    else if (n % 4 == 3) {
        x -= 2;
        y += n - 1;
    }
    printf("%lld %lld\n", x, y);
    return 0;
}

// x+1  y+2  x-3  y-4  x+5