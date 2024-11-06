#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

const int MOD = 1000000007;
const int N = 100010;
pair<int, int> a[N];
vector<int> vec;
map<int, int> mp;

int tr[N * 4], m;

void modify(int u, int v) {
    for (int i = u; i <= m; i += (i & -i))
        tr[i] += v;
}

int query(int u) {
    int res = 0;
    for (int i = u; i; i -= (i & -i))
        res += tr[i];
    return res;
}

int query(int l, int r) {
    return query(r) - query(l - 1);
}

int main() {
    // freopen("input", "r", stdin);
    int n;
    ll x, y, cost = 0;
    scanf("%d%lld%lld", &n, &x, &y);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
        vec.push_back(a[i].first), vec.push_back(a[i].second);
        vec.push_back(a[i].first - x / y), vec.push_back(a[i].first - 1);
    }
    sort(a, a + n);

    // li san hua
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    m = vec.size();
    for (int i = 0; i < vec.size(); ++i) {
        mp[vec[i]] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        int ll = mp[a[i].first - x / y], rr = mp[a[i].first - 1], t = query(ll, rr);
        if (t) {
            int l = ll, r = rr;
            // printf("%d %d\n", l, r);
            while (l < r) {
                int mid = l + r >> 1;
                if (query(ll, mid) < t) l = mid + 1;
                else r = mid;
            }
            // printf("%d cat : %d -> %d %d\n", t, vec[l - 1], a[i].first, a[i].second);
            cost += y * (a[i].second - vec[l - 1]);
            modify(l, -1);
        }
        else {
            // printf("%d new %d %d\n", t, a[i].first, a[i].second);
            cost += x + y * (a[i].second - a[i].first);
        }
        modify(mp[a[i].second], 1);
        cost %= MOD;
    }
    printf("%lld\n", cost);
    return 0;
}
/**************************************************************
	Problem: 20341
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:3712 kb
****************************************************************/
