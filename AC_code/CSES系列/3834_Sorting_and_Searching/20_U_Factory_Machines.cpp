#include <cstdio>
#include <cmath>

using namespace std;

typedef unsigned long long ll;

ll a[200010], t;
int n;

bool check(ll mid) {
    ll tt = 0;
    for (int i = 1; i <= n; ++i) {
        tt += (mid / a[i]);
    }
    return tt >= t;
}

int main() {
    ll l = 0, r = 0;
    scanf("%d%llu", &n, &t);
    for (int i = 1; i <= n; ++i) {
        scanf("%llu", &a[i]);
        r = r > a[i] ? r : a[i];
    }
    r *= t;
    while (l < r) {
        ll mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%llu\n", l);
    return 0;
}

/**************************************************************
	Problem: 23030
	Language: C++
	Result: 正确
	Time:513 ms
	Memory:2680 kb
****************************************************************/
