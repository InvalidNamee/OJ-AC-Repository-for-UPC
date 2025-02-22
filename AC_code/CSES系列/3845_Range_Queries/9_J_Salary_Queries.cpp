#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 600010;

vector<int> vec;
vector<pair<int, pair<int, int>>> qs;
map<int, int> mp;
int tr[N << 2];
int a[N];

void pushup(int u) {
    tr[u] = tr[u << 1] + tr[u << 1 | 1];
}

void modify(int u, int l, int r, int p, int v) {
    if (l == r) {
        tr[u] += v;
        return;
    }
    int mid = l + r >> 1;
    if (p <= mid) modify(u << 1, l, mid, p, v);
    else modify(u << 1 | 1, mid + 1, r, p, v);
    pushup(u);
}

int query(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) return tr[u];
    int mid = l + r >> 1, res = 0;
    if (ql <= mid) res += query(u << 1, l, mid, ql, qr);
    if (qr > mid) res += query(u << 1 | 1, mid + 1, r, ql, qr);
    return res;
}

void print(int u, int l, int r) {
    if (l == r) {
        printf("%d ", tr[u]);
        return;
    }
    int mid = l + r >> 1;
    print(u << 1, l, mid);
    print(u << 1 | 1, mid + 1, r);
}

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        vec.push_back(a[i]);
    }
    getchar();
    for (int i = 1; i <= q; ++i) {
        char c = getchar();
        int a, b;
        scanf("%d%d", &a, &b);
        qs.push_back({c, {a, b}});
        vec.push_back(a), vec.push_back(b);
        getchar();
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    int m = vec.size();
    for (int i = 0; i < vec.size(); ++i) {
        mp[vec[i]] = i + 1;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
        modify(1, 1, m, a[i], 1);
    }
    for (auto it : qs) {
        int x = it.second.first, y = it.second.second;
        if (it.first == '!') {
            modify(1, 1, m, a[x], -1);
            modify(1, 1, m, mp[y], 1);
            a[x] = mp[y];
        }
        else {
            printf("%d\n", query(1, 1, m, mp[x], mp[y]));
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23120
	Language: C++
	Result: 正确
	Time:950 ms
	Memory:48408 kb
****************************************************************/