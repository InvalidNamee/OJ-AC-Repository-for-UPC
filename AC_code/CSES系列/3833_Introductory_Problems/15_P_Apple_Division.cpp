#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

ll p[25], tot, ans = 20000000001;

void dfs(int d, ll s, const int &n) {
    if (d == n) {
        ans = min(ans, abs(tot - 2 * s));
        return;
    }
    dfs(d + 1, s, n);
    dfs(d + 1, s + p[d], n);
}

int main() {
    int n; 
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &p[i]);
        tot += p[i];
    }
    dfs(1, 0, n);
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23007
	Language: C++
	Result: 正确
	Time:106 ms
	Memory:2024 kb
****************************************************************/