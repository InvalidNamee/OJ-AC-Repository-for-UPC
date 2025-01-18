#include <cstdio>

long long f[10010];
int v[110];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &v[i]);
    }
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= v[i]; --j) {
            f[j] += f[j - v[i]];
        }
    }
    printf("%lld\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23901
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1316 kb
****************************************************************/