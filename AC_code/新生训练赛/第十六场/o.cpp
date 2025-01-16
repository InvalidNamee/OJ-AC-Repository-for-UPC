#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

const int N = 200010;

int s[N], f[N];
vector<int> l[N];

int main() {
    int n, q;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
        s[i] += s[i - 1];
    }
    scanf("%d", &q);
    for (int i = 1; i <= q; ++i) {
        int ll, rr;
        scanf("%d%d", &ll, &rr);
        l[rr].push_back(ll);
    }
    for (int i = 1; i <= n; ++i) {
        f[i] = f[i - 1] + s[i] - s[i - 1];
        for (auto j : l[i]) {
            f[i] = min(f[i], f[j - 1] + (i - j + 1) - (s[i] - s[j - 1]));
        }
    }
    printf("%d\n", f[n]);
    return 0;
}