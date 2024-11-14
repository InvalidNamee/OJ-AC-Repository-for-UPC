#include <cstdio>
#include <map>
#define int long long

using namespace std;

long long a[200010];
map<long long, int> mp;

signed main() {
    int n, ans = 0;
    long long x;
    scanf("%d%lld", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    for (int i = n; i; --i) {
        mp[a[i]] ++;
        if (mp.find(a[i - 1] + x) != mp.end()) {
            ans += mp[a[i - 1] + x];
        }
    }
    printf("%lld\n", ans);
    return 0;
}

/*
2 -1 3 5 -2
2  1 4 9  7
*/
/**************************************************************
	Problem: 23036
	Language: C++
	Result: 正确
	Time:7221 ms
	Memory:16048 kb
****************************************************************/
