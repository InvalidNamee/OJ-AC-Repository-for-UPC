#include <cstdio>
#define int long long

using namespace std;

int a[200010];
int n, k;

bool check(int mid) {
    int s = 0, t = k - 1;
    for (int i = 1; i <= n; ++i) {
        if (a[i] > mid) return false;
        if (s + a[i] > mid) {
            if (!t) return false;
            s = 0;
            t--;
        }
        s += a[i];
    }
    return true;
}

signed main() {
    int l = 1, r = 0;
    scanf("%lld%lld", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        r += a[i];
    }
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%lld\n", l);
    return 0;
}
/**************************************************************
	Problem: 23044
	Language: C++
	Result: 正确
	Time:561 ms
	Memory:2680 kb
****************************************************************/
