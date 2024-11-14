#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll a[200010];

int main() {
    a[0] = -10000000000;
    int n;
    ll ans = -10000000000000000;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] = max(a[i], a[i] + a[i - 1]);
        ans = max(ans, a[i]);
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23017
	Language: C++
	Result: 正确
	Time:204 ms
	Memory:3584 kb
****************************************************************/
