#include <cstdio>
#include <queue>

using namespace std;

typedef long long ll;

ll a[1000][1000];
ll sl[1000010], sc[1000010];
priority_queue<ll> l, c;

int main() {
    int n, m, k;
    ll p;
    long long res = -__LONG_LONG_MAX__, t1 = 0, t2 = 0;
    scanf("%d%d%d%lld", &n, &m, &k, &p);
    for (int i = 0; i < n; ++i) { 
        int ls = 0;
        for (int j = 0; j < m; ++j) {
            scanf("%lld", &a[i][j]);
            ls += a[i][j];
        }
        l.push(ls);
    }
    for (int j = 0; j < m; ++j) {
        int cs = 0;
        for (int i = 0; i < n; ++i) {
            cs += a[i][j];
        }
        c.push(cs);
    }
    for (int i = 1; i <= k; ++i) {
        sl[i] = sl[i - 1] + l.top();
        l.push(l.top() - p * m);
        l.pop();
    }
    for (int i = 1; i <= k; ++i) {
        sc[i] = sc[i - 1] + c.top();
        c.push(c.top() - p * n);
        c.pop();
    }
    for (int i = 0; i <= k; ++i) {
        res = max(res, sc[i] + sl[k - i] - (ll)(k - i) * i * p);
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 20344
	Language: C++
	Result: 正确
	Time:39 ms
	Memory:24804 kb
****************************************************************/
