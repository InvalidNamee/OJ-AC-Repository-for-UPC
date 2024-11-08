#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct FenwickTree {
    int a[200010], n;

    void add(int u, int v) {
        for (int i = u; i <= n; i += i & -i) {
            a[i] = max(a[i], v);
        }
    }

    int query(int u) {
        int res = 0;
        for (int i = u; i; i -= i & -i) {
            res = max(res, a[i]);
        }
        return res;
    }
} tr;

int a[200010];
vector<int> vec;
map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        vec.push_back(a[i]);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        mp[vec[i]] = i + 1;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
    }
    int ans = 0;
    tr.n = vec.size();
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, tr.query(a[i] - 1) + 1);
        tr.add(a[i], tr.query(a[i] - 1) + 1);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23064
	Language: C++
	Result: 正确
	Time:2654 ms
	Memory:14080 kb
****************************************************************/
