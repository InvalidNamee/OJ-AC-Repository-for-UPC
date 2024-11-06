#include <cstdio>

int a[1010];

int main() {
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int w;
        scanf("%d", &w);
        int p = 0;
        for (int j = 1; j <= t; ++j) {
            if (a[j] >= w) {
                a[j] -= w;
                p = j;
                break;
            }
        }
        if (!p) a[++t] = 100 - w, p = t;
        printf("%d %d\n", w, p);
    }
    printf("%d\n", t);
    return 0;
}
/**************************************************************
	Problem: 9817
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
