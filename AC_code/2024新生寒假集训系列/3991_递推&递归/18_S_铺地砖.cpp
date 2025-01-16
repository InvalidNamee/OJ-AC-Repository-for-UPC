#include <cstdio>

const int MOD = 1000000007;
long long f[200010][8];
bool valid[] = {false, true, false, false, true, false, false, true};
// 000 001 010 011 100 101 110 111

int main() {
    int n;
    scanf("%d", &n);
    f[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 8; ++j) {
            for (int k = 0; k < 8; ++k) {
                if (j & k) continue;
                if (valid[j | k]) {
                    f[i][j] += f[i - 1][k];
                    f[i][j] %= MOD;
                }
            }
        }
    }
    printf("%lld\n", f[n][0]);
    return 0;
}
/**************************************************************
	Problem: 23087
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:13736 kb
****************************************************************/