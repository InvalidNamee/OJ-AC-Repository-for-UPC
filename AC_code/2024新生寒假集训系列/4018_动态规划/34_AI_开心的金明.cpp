#include <cstdio>
#include <iostream>

using namespace std;

int v[30], p[30];
int f[30010];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &v[i], &p[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]] + v[i] * p[i]);
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 1614
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2340 kb
****************************************************************/