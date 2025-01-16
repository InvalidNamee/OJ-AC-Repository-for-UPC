#include <cstdio>
#include <iostream>

using namespace std;

int a[1010], b[1010];
int f[1010][1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            if (a[i] == b[j]) f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
        }
    }
    printf("%d\n", f[n][n]);
    return 0;
}
/**************************************************************
	Problem: 23854
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:6216 kb
****************************************************************/