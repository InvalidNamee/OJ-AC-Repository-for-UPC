#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b, x, y, n;
        scanf("%d%d%d%d%d", &a, &b, &x, &y, &n);
        if (a + b - x - y <= n) printf("%lld\n", (long long)x * y);
        else {
            long long t1 = 0, t2 = 0;
            if (n <= a - x) t1 = (long long)(a - n) * b;
            else t1 = (long long)x * (b - n + (a - x));
            if (n <= b - y) t2 = (long long)(b - n) * a;
            else t2 = (long long)y * (a - n + (b - y));
            printf("%lld\n", min(t1, t2));
        }
    }
    return 0;
}