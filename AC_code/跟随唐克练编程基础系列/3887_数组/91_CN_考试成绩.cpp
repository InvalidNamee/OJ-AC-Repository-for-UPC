#include <cstdio>

int s[11], t[11];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int a;
            scanf("%d", &a);
            s[i] += a;
            t[j] += a;
        }
    }
    for (int i = 1; i <= m; ++i) printf(" %.2f", (double)t[i] / n);
    printf("\n");
    for (int i = 1; i <= n; ++i) printf("%d\n", s[i]);
    return 0;
}
/**************************************************************
	Problem: 9834
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
