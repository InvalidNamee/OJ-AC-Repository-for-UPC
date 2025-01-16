#include <cstdio>
#include <iostream>

using namespace std;

long long f[3010], s[3010];
int c[3010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &c[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &s[i]);
        s[i] += s[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        f[i] = f[i - 1];
        for (int j = 1; j < i; ++j) {
            if (c[i] == c[j]) f[i] = max(f[i], f[j - 1] + s[i] - s[j - 1]);
        }
    }
    printf("%lld\n", f[n]);
    return 0;
}