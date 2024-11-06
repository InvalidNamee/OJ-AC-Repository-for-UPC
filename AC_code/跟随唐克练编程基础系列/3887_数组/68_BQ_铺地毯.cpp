#include <cstdio>

const int N = 10010;

int a[N], b[N], g[N], k[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d%d", &a[i], &b[i], &g[i], &k[i]);
    }
    int x, y;
    scanf("%d%d", &x, &y);
    for (int i = n; i; --i) {
        if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
/**************************************************************
	Problem: 1727
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:1392 kb
****************************************************************/
