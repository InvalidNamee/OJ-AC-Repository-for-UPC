#include <cstdio>

int a[100][100];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", a[i] + j);
        }
        for (int j = m - 1; j >= 0; --j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 3297
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/
