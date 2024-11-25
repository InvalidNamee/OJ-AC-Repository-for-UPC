#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long mn = LLONG_MAX, mx = LLONG_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        long long t;
        scanf("%lld", &t);
        mn = min(mn, t);
        mx = max(mx, t);
    }
    printf("%lld\n", mx - mn);
    return 0;
}
