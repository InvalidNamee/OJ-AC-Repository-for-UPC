#include <cstdio>
#include <iostream>

using namespace std;

int f[410][410];
int v[60], m[60], val[60];

int main() {
    int V, M, n;
    scanf("%d%d%d", &V, &M, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d", &v[i], &m[i], &val[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = M; j >= m[i]; --j) {
            for (int k = V; k >= v[i]; --k) {
                f[j][k] = max(f[j][k], f[j - m[i]][k - v[i]] + val[i]);
            }
        }
    }
    printf("%d\n", f[M][V]);
    return 0;
}
/**************************************************************
	Problem: 23897
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:2880 kb
****************************************************************/