#include <cstdio>

long long f[5010];
int v[110];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &v[i]);
    }
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = v[i]; j <= m; ++j) {
            f[j] += f[j - v[i]];
        }
    }
    printf("%lld\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23907
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/