#include <cstdio>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if (a % 2 == 0) a++;
    if (b % 2 == 0) b++;
    printf("%lld\n", (b - a) / 2 + 1);
    return 0;
}

/*
1
2 3
4 5
6 7
8 9
10 11
12
*/