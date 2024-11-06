#include <cstdio>

int main() {
    int n, s = 0;
    int m, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int tt;
        scanf("%d", &tt);
        s += tt;
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i) {
        int tt;
        scanf("%d", &tt);
        t += tt;
    }
    if (s > t) printf("A\n");
    else printf("B\n");
    printf("%d %d\n", s, t);
    return 0;
}
/**************************************************************
	Problem: 1039
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
