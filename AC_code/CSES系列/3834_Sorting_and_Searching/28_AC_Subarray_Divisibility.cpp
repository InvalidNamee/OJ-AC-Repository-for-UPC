#include <cstdio>
#include <map>
#define int long long

using namespace std;

int a[200010];
map<int, int> mp;

signed main() {
    int n, ans = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
        a[i] = (a[i] % n + n) % n;
    }
    for (int i = n; i; --i) {
        mp[a[i]] ++;
        if (mp.find(a[i - 1]) != mp.end()) {
            ans += mp[a[i - 1]];
        }
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23042
	Language: C++
	Result: 正确
	Time:945 ms
	Memory:16048 kb
****************************************************************/
