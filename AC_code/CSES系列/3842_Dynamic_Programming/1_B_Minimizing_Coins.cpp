#include <cstdio>
#include <cstring>
#include <iostream>
#define int long long 

using namespace std;

int f[1000010], a[110];

signed main() {
    int n, x;
    scanf("%lld%lld", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    memset(f, 0x3f, sizeof(f));
    int mxn = f[0];
    f[0] = 0;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i - a[j] >= 0) f[i] = min(f[i], f[i - a[j]] + 1);
        }
    }
    printf("%lld\n", f[x] == mxn ? -1 : f[x]);
    return 0;
}
/**************************************************************
	Problem: 23051
	Language: C++
	Result: 正确
	Time:2393 ms
	Memory:9836 kb
****************************************************************/
