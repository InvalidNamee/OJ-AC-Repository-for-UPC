#include <cstdio>
#include <iostream>

using namespace std;

int h[1010], s[1010];
int f[100010];

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &h[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = x; j >= h[i]; --j) {
            f[j] = max(f[j], f[j - h[i]] + s[i]);
        }
    }
    printf("%d\n", f[x]);
    return 0;
}
/**************************************************************
	Problem: 23056
	Language: C++
	Result: 正确
	Time:4452 ms
	Memory:2420 kb
****************************************************************/
