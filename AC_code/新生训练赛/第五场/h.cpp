#include <cstdio>
#include <cmath>
#include <iostream>
#include <map>

using namespace std;

typedef long long ll;
const int MOD = 1000000007;
map<int, int> mp;
ll f[200010];

ll poww(ll n, int p) {
    ll res = 1, t = n;
    while (p) {
        if (p & 1) res = (res * t) % MOD;
        t = (t * t) % MOD;
        p >>= 1;
    }
    return res;
}

void work(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        while (n % i == 0) {
            n /= i;
            mp[i]++;
        }
    }
    if (n != 1) mp[n]++;
}

ll jc(int n) {
    if (n == 0) return 1;
    else if (f[n]) return f[n];
    else return f[n] = (jc(n - 1) * n) % MOD;
}

ll c(ll n, ll m) {
    return (jc(n) * poww(jc(m), MOD - 2) % MOD * poww(jc(n - m), MOD - 2)) % MOD;
}

int main() {
    ll n, m;
    scanf("%lld%lld", &n, &m);
    work(m);
    ll res = 1;
    for (auto i : mp) {
        res *= c(n + i.second - 1, n - 1);
        res %= MOD;
    }
    printf("%lld\n", res % MOD);
    return 0;
}