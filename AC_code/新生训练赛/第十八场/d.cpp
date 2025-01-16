#include <cstdio>
#include <cmath>

int main() {
    int r;
    scanf("%d", &r);
    double mx = 0;
    int a, b;
    for (int i = 1; i <= 2 * r; ++i) {
        for (int j = 1; j <= 2 * r; ++j) {
            double s = sqrt(r * r - (double)i * i / 4) * 2 * i + sqrt(r * r - (double)j * j / 4) * 2 * j - i * j;
            if (s > mx) a = i, b = j, mx = s;
        }
    }
    printf("%d\n%d\n", a, b);
    return 0;
}