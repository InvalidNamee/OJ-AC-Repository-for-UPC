#include <cstdio>

int a[1000][1000];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int j = m - 1; j >= 0; --j) {
        for (int i = 0; i < n; ++i) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1023
	Language: C++
	Result: 正确
	Time:196 ms
	Memory:5144 kb
****************************************************************/
