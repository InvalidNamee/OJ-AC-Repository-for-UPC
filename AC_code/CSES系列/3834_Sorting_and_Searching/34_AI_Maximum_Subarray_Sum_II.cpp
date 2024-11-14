#include <cstdio>
#include <iostream>
#include <climits>

using namespace std;

typedef long long ll;

ll a[200010];
int q[200010];

int main() {
    // freopen("input", "r", stdin);
    int n, mnl, mxl;
    scanf("%d%d%d", &n, &mnl, &mxl);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    ll res = LLONG_MIN;
    int hh = 0, tt = -1;
    q[++tt] = 0;
    for (int i = mnl; i <= n; ++i) {
        while (hh <= tt && i - q[hh] > mxl) hh++;
        res = max(res, a[i] - a[q[hh]]); 
        while (hh <= tt && a[i - mnl + 1] <= a[q[tt]]) tt--;
        q[++tt] = i - mnl + 1;
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 23048
	Language: C++
	Result: 正确
	Time:33 ms
	Memory:4564 kb
****************************************************************/
