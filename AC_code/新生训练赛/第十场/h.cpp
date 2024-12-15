#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>

using namespace std;

map<int, int> mp;
pair<int, int> a[100010];
bool selected[100010];
long long b[100010], q[100010];
int lb, lq;

int main() {
    int n, k, m = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].second, &a[i].first);
        mp[a[i].second] = 1;
    }
    for (auto &i : mp) i.second = ++m;
    for (int i = 1; i <= n; ++i) {
        a[i].second = mp[a[i].second];
    }
    sort(a + 1, a + n + 1, greater<pair<int, int>>());
    long long tot = 0, t = 0;
    for (int i = 1; i <= k; ++i) {
        tot += a[i].first;
        if (!selected[a[i].second]) selected[a[i].second] = true, t++;
        else b[++lb] = a[i].first;
    }
    for (int i = 1; i <= n; ++i) {
        if (!selected[a[i].second]) {
            selected[a[i].second] = true;
            q[++lq] = a[i].first;
        }
    }
    int l = min(lq, lb);
    long long ans = 0;
    for (int i = 1; i <= lb; ++i) b[i] += b[i - 1];
    for (int i = 1; i <= lq; ++i) q[i] += q[i - 1];
    for (int i = 0; i <= l; ++i) {
        ans = max(ans, tot - (b[lb] - b[lb - i]) + q[i] + (t + i) * (t + i));
    }
    printf("%lld\n", ans);
    return 0;
}