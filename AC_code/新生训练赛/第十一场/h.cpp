#include <cstdio>
#include <iostream>

using namespace std;

int cnt[40];
bool f[40];

int main() {
    int n;
    long long k;
    scanf("%d%lld", &n, &k);
    for (int i = 1; i <= n; ++i) {
        long long t;
        scanf("%lld", &t);
        for (int j = 0; j < 40; ++j) {
            cnt[j] += t >> j & 1;
        }
    }
    for (int i = 0; i < 40; ++i) {
        if (cnt[i] > n - cnt[i]) f[i] = 1;
        else f[i] = 0; 
    }
    long long ans = 0, cur = 0;
    for (int i = 39; i >= 0; --i) {
        if (k >> i & 1) {
            long long t = cur + (1ll << i) * cnt[i];
            for (int j = i - 1; j >= 0; --j) t += (1ll << j) * max(cnt[j], n - cnt[j]);
            ans = max(t, ans);
            cur += (1ll << i) * (n - cnt[i]);
        }
        else {
            cur += (1ll << i) * cnt[i];
        }
    }
    ans = max(ans, cur);
    printf("%lld\n", ans);
    return 0;
}
