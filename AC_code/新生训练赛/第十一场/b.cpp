#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    int a, b;
    scanf("%d", &n);
    scanf("%d%d", &a, &b);
    for (int i = 1; i < n; ++i) {
        int c, d;
        scanf("%d%d", &c, &d);
        int t = max((a + c - 1) / c, (b + d - 1) / d);
        a = c * t, b = d * t;
    }
    printf("%d\n", a + b);
    return 0;
}