#include <cstdio>
#include <iostream>

using namespace std;

int w[110], p[110];
int f[1010];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &w[i], &p[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= w[i]; --j) {
            f[j] = max(f[j], f[j - w[i]] + p[i]);
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 3491
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/