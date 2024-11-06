#include <cstdio>

int a[21][21];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t = 1;
        for (int j = 1; j <= n; ++j) {
            if (i == 1) {
                if (j & 1) {
                    printf("%5d", a[i][j] = t = t + j + j - 2);
                }
                else printf("%5d", a[i][j] = ++t);
            }
            else {
                if (j != n) {
                    if (i + j & 1) printf("%5d", a[i][j] = a[i - 1][j + 1] + 1);
                    else printf("%5d", a[i][j] = a[i - 1][j + 1] - 1);
                }
                else {
                    if (!((i ^ n) & 1)) printf("%5d", a[i][j] = a[i - 1][j] + 2 * n - i - i + 2);
                    else printf("%5d", a[i][j] = a[i - 1][j] + 1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 10166
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
