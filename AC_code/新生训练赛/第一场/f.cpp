#include <cstdio>

int main() {
    double s, x;
    double p = 0.0, t = 7.0;
    scanf("%lf%lf", &s, &x);
    while (p < s) {
        if (t + t * 0.98 < x * 2) {
            printf("y\n");
            return 0;
        }
        p += t;
        t *= 0.98;
        if (p >= (s - x)) {
            if (p + t <=  s + x) {
                printf("y\n");
                return 0;
            }
        }
    }
    printf("n\n");
    return 0;
}

/*
7 * (0.98)^(n - 1)

(7 * (1 - 0.98^n)) / 0.02
*/