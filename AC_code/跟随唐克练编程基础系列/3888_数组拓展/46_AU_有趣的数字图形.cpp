#include <cstdio>

int a[10][10];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) a[i][i] = i;
    for (int i = 1; i <= n; ++i) {
        for (int j = i - 1; j; --j) a[i][j] = a[i][j + 1] + a[i - 1][j];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) printf("%5d", a[i][j]);
        for (int j = i; j <= n; ++j) printf("%5d", a[j][i]);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22583
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1236 kb
****************************************************************/
