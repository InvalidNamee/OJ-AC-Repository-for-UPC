#include <cstdio>
#include <map>
#include <set>
#define int long long
 
using namespace std;
 
const int N = 150010;
int a[N], ne[N];
map<int, set<int>> mp;
 
signed main() {
    int n, l;
    scanf("%lld", &n);
    l = n;
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        mp[a[i]].insert(i);
    }
    for (auto i : mp) {
        auto &s = i.second;
        while (s.size() > 1) {
            int t = *s.begin();
            s.erase(s.begin());
            a[t] = 0;
            t = *s.begin();
            s.erase(s.begin());
            a[t] = 2 * i.first;
            mp[a[t]].insert(t);
            l--;
        }
    }
    printf("%lld\n", l);
    for (int i = 1; i <= n; ++i) {
        if (a[i]) printf("%lld ", a[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 20346
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:3652 kb
****************************************************************/
