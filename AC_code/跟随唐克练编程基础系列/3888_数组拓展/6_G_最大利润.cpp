#include <cstdio>

int main() {
    int m, x, n, mx = 0, p;
    scanf("%d%d%d", &m, &x, &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (mx < t) {
            mx = t;
            p = i;
        }
    }
    printf("%d %d\n", p, (mx - x) * m);
    return 0;
}
/**************************************************************
	Problem: 22543
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
