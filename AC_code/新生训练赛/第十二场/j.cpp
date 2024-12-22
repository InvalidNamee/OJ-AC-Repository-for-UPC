#include <cstdio>

bool check(int n) {
    int r = 0;
    while (n) {
        r += n % 10;
        n /= 10;
    }
    return r % 7 == 0;
}

int main() {
    int l, r, cnt = 0;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; ++i) {
        cnt += check(i);
    }
    printf("%d\n", cnt);
    return 0;
}