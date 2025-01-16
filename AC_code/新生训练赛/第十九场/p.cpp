#include <cstdio>
#include <set>
#include <algorithm>

using namespace std;

int head[100010], ver[200010], ne[200010], tot;
int deg[100010], f[100010];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

bool dp(int x, int fa, int mid) {
    multiset<int> s, t;
    f[x] = 1;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa) continue;
        if (!dp(y, x, mid)) return false;
        s.insert(f[y]);
    }
    while (!s.empty()) {
        auto it = --s.end();
        if (*it > mid) 
            return false;
        else {
            int val = *it;
            s.erase(it);
            if (s.empty()) {
                t.insert(val);
                break;
            }
            else {
                auto l = s.upper_bound(mid - val);
                if (l == s.begin()) {
                    t.insert(val); continue;
                }
                else s.erase(--l);
            }
        }
    }
    if (t.size() > 2) 
        return false;
    else if (!t.empty()) {
        if (x == 1 && t.size() == 2) 
            return false;
        f[x] += *t.begin();
    }
    if (x == 1) return true;
    else return f[x] <= mid;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        add(x, y), add(y, x);
        deg[x]++, deg[y]++;
    }
    // A
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += deg[i] & 1;
    }
    printf("%d ", (cnt + 1) >> 1);
    // B
    int l = 1, r = n;
    while (l < r) {
        int mid = l + r >> 1;
        if (dp(1, 0, mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}