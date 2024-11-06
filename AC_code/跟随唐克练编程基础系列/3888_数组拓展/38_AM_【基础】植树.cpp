#include <cstdio>

int a[110];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i <= m; ++i) a[i] = 16;
    for (int i = 0; i < n; ++i) {
        int l, r, t;
        scanf("%d%d%d", &l, &r, &t);
        for (int j = l; j <= r; ++j) a[j] = t;
    }
    int s = 0;
    for (int i = 0; i <= m; i += 5) {
        s += a[i];
    }
    printf("%d\n", s << 1);
    return 0;
}
/**************************************************************
	Problem: 22575
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
