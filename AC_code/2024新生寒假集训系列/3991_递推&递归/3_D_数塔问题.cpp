#include <cstdio>
#include <iostream>

using namespace std;

int f[110][110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = n - 1; i; --i) {
        for (int j = 1; j <= i; ++j) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);
        }
    }
    printf("%d\n", f[1][1]);
    return 0;
}
/**************************************************************
	Problem: 23801
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2268 kb
****************************************************************/