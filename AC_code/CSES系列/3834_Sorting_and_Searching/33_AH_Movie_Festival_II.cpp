#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#define int long long
 
using namespace std;
 
vector<pair<int, int>> t;
multiset<int> r;
 
bool cmp(const pair<int, int> &a,  const pair<int, int> &b) {
    return a.second < b.second;
}
 
signed main() {
    int n, k, ans = 0;
    scanf("%lld%lld", &n, &k);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%lld%lld", &a, &b);
        t.push_back({a, b});
    }
    sort(t.begin(), t.end(), cmp);
    for (auto it : t) {
        if (r.empty() && k) {
            k--;
            r.insert(it.second);
            ans++;
        }
        else {
            auto p = r.upper_bound(it.first);
            if (p == r.begin()) {
                if (k) {
                    k--;
                    r.insert(it.second);
                    ans++;
                }
            }
            else {
                p--;
                r.erase(p);
                r.insert(it.second);
                ans++;
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23047
	Language: C++
	Result: 正确
	Time:1605 ms
	Memory:9648 kb
****************************************************************/
