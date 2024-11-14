#include <cstdio>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

struct node {
    int l, r, x;

    bool operator <(const node &t) {
        return r < t.r;
    }
} a[200010];

struct FenwickTree {
    int a[400010], n;

    void add(int u) {
        for (; u <= n; u += u & -u) {
            a[u] ++;
        }
    }

    int query(int u) {
        // printf("query %d\n", u);
        int res = 0;
        for (; u; u -= u & -u) {
            res += a[u];
        }
        return res;
    }

    void clear() {
        for (int i = 1; i <= n; ++i) {
            a[i] = 0;
        }
    }
} tr;

int ans[200010];
vector<int> vec;
unordered_map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].l, &a[i].r);
        vec.push_back(a[i].l), vec.push_back(a[i].r);
        a[i].x = i;
    }
    sort(a + 1, a + n + 1);
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (int i = 1; i <= vec.size(); ++i) {
        mp[vec[i - 1]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        a[i].l = mp[a[i].l], a[i].r = mp[a[i].r];
        // printf("%d %d\n", a[i].l, a[i].r);
    }
    tr.n = vec.size();
    int l, r;
    for (l = 1, r = 1; r <= n; ++r) {
        if (r != 1 && a[r].r != a[r - 1].r) {
            while (l < r) {
                ans[a[l].x] = tr.query(a[l].r) - tr.query(a[l].l - 1) - 1;
                l ++;
            }
        }
        tr.add(a[r].l);
    }
    r --;
    while (l <= r) {
        ans[a[l].x] = tr.query(a[l].r) - tr.query(a[l].l - 1) - 1;
        l ++;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    tr.clear();
    for (r = n, l = n; l; --l) {
        if (l != n && a[l].r != a[l + 1].r) {
            while (l < r) {
                ans[a[r].x] = tr.query(a[r].l) - 1;
                r --;
            }
        }
        tr.add(a[l].l);
    }
    while (r) {
        ans[a[r].x] = tr.query(a[r].l) - 1;
        r --;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 23028
	Language: C++
	Result: 正确
	Time:3597 ms
	Memory:25244 kb
****************************************************************/
