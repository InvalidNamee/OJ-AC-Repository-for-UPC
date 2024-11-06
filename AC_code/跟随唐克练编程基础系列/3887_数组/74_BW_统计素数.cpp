#include <cstdio>

int mark[10010];
int p[10010], cnt;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        if (!mark[i]) {
            for (int j = 2; i * j <= n; ++j) {
                mark[i * j] = true;
            }
            p[++cnt] = i;
        }
    }
    printf("%d\n", cnt);
    for (int i = 1; i <= cnt; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9822
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1316 kb
****************************************************************/
