#include <cstdio>

int t[110];

int main() {
    int n, m, res = 0;
    t[0] = 0x3f3f3f3f;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int w;
        scanf("%d", &w);
        int p = 0;
        for (int i = 1; i <= m; ++i) {
            if (t[i] < t[p]) p = i;
        }
        t[p] += w;
        res = res > t[p] ? res : t[p];
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 1773
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1236 kb
****************************************************************/