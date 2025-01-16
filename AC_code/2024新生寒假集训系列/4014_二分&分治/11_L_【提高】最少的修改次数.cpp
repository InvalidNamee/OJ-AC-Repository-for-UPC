#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;
int tr[100010], n;
int a[100010];

void add(int u, int v) {
    for (; u <= n; u += u & -u) {
        tr[u] = max(tr[u], v);
    }
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u) {
        res = max(tr[u], res);
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        mp[a[i]];
    }
    int m = 0;
    for (auto &i : mp) {
        i.second = ++m;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
    }
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res = max(res, query(a[i] - 1) + 1);
        add(a[i], query(a[i] - 1) + 1);
    }
    printf("%d\n", n - res);
    return 0;
}
/**************************************************************
	Problem: 23856
	Language: C++
	Result: 正确
	Time:47 ms
	Memory:4860 kb
****************************************************************/