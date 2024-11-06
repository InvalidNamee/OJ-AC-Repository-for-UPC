#include <cstdio>

int a[13][13];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) a[n - i + 1][i] = i;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < n - i + 1; ++j) printf("     ");
        printf("%5d", a[i][n - i + 1]);
        for (int j = n - i + 2; j <= n; ++j) {
            a[i][j] = a[i][j - 1] + a[i - 1][j];
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22584
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
