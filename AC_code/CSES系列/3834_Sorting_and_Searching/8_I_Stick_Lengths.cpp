#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll a[200010];
int n;

ll cost(ll t) {
    ll res = 0;
    for (int i = 1; i <= n; ++i) {
        res += abs(t - a[i]);
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    printf("%lld\n", cost(a[(n >> 1) + 1]));
    return 0;
}
/**************************************************************
	Problem: 23018
	Language: C++
	Result: 正确
	Time:231 ms
	Memory:3588 kb
****************************************************************/
