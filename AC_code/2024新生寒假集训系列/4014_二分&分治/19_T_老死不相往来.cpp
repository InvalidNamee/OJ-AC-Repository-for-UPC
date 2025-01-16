#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

pair<int, int> a[50010];
map<int, int> mp;
int tr[100010], m;

void add(int u) {
    for (; u <= m; u += u & -u)
        tr[u]++;
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u)
        res += tr[u];
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t1, t2;
        scanf("%d%d", &t1, &t2);
        a[i].first = t1 - t2, a[i].second = t1 + t2;
        mp[a[i].first], mp[a[i].second];
    }
    for (auto &i : mp) i.second = ++m;
    for (int i = 1; i <= n; ++i) {
        a[i].first = mp[a[i].first];
        a[i].second = mp[a[i].second];
    }
    sort(a + 1, a + n + 1, [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });
    long long res = 0;
    for (int i = 1; i <= n; ++i) {
        res += query(a[i].first - 1);
        add(a[i].second);
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 13806
	Language: C++
	Result: 正确
	Time:95 ms
	Memory:6844 kb
****************************************************************/