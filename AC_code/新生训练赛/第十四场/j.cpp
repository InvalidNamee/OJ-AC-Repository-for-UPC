#include <cstdio>
#include <iostream>

using namespace std;

const int MOD = 1000000007;
long long a[210];

int main() {
    int n;
    long long k, res = 0;
    scanf("%d%lld", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    for (int t = 0; t <= k; ++t) {
        long long cnt = k - t + 1;
        for (int i = 1; i <= n; ++i) {
            cnt = min(cnt, a[i] + 1);
        }
        printf("%lld\n", cnt);
        res = (res + cnt) % MOD;
        bool f = true;
        for (int i = 1; i <= n; ++i) {
            if (a[i]) {
                f = false;
            }
            a[i] >>= 1;
        }
        if (f) break;
    }
    printf("%lld\n", res);
    return 0;
}

/*
10 13 22
5

5 6 11
4

2 3 5
3

1 1 2
2

0 0 1
1
*/