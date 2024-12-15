#include <cstdio>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int l = m / n;
    for (int i = l; i; --i) {
        if (m % i == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}

/*
m / n >= t
*/