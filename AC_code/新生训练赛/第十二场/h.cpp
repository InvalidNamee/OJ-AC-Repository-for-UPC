#include <cstdio>

bool run(int a) {
    return a % 100 == 0 ? a % 400 == 0 : a % 4 == 0;
}

int day(int a, int b) {
    if (b == 2) {
        if (run(a)) return 29;
        else return 28;
    }
    else if (b == 4 || b == 6 || b == 9 || b == 11) return 30;
    else return 31;
}

int main() {
    int a, b, c, d, t;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &t);
    c += t, d += t;
    d = (d - 1) % 7 + 1;
    while (c > day(a, b)) {
        c -= day(a, b);
        b++;
        if (b == 13) {
            a++;
            b = 1;
        }
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}