#include <cstdio>
#include <vector>
#include <map>
#define int long long

using namespace std;

int a[200010], t[200010], tot;
map<int, int> mp;

signed main() {
    int n, x, ans = 0;
    scanf("%lld%lld", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    int hh, tt;
    for (hh = 1, tt = 1; tt <= n; ++tt) {
        if (!mp[a[tt]]) tot++;
        mp[a[tt]]++;
        while (tot > x) {
            mp[a[hh]]--;
            if (!mp[a[hh]]) tot--;
            hh++;
        }
        ans += tt - hh + 1;
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23043
	Language: C++
	Result: 正确
	Time:2599 ms
	Memory:17612 kb
****************************************************************/
