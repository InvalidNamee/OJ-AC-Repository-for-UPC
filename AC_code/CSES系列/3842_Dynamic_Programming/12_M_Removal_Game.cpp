#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

ll f[5010][5010];

int main() {
    int n;
    ll s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &f[i][i]);
        s += f[i][i];
    }
    for (int l = 2; l <= n; ++l) {
        for (int i = 1; i <= n - l + 1; ++i) {
            int j = i + l - 1;
            f[i][j] = max(f[i][i] - f[i + 1][j], f[j][j] - f[i][j - 1]);
        }
    }
    printf("%lld\n", s + f[1][n] >> 1);
    return 0;
}
/**************************************************************
	Problem: 23062
	Language: C++
	Result: 正确
	Time:389 ms
	Memory:198316 kb
****************************************************************/
