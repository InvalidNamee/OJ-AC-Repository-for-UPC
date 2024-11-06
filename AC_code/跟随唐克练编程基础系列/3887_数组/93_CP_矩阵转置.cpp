#include <cstdio>

int a[1010][1010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 9847
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:5220 kb
****************************************************************/
