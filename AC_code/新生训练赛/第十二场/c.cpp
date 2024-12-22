#include <cstdio>

int pow(int n, int p) {
    int res = 1, base = n;
    while (p) {
        if (p & 1) res = res * base % 7;
        base = base * base % 7;
        p >>= 1;
    }
    return res;
}

char ans[][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", ans[(6 + pow(a, b)) % 7]);
    return 0;
}