#include <cstdio>

int a[20][20];

int main() {
    int n, t = 0;
    scanf("%d", &n);
    int x = 0, y = n >> 1;
    a[x][y] = ++t;
    while (t < n * n) {
        if (!a[(x - 1 + n) % n][(y + 1) % n]) {
            x = (x - 1 + n) % n, y = (y + 1) % n;
            a[x][y] = ++t;
        }
        else {
            x = (x + 1) % n;
            a[x][y] = ++t;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1635
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1240 kb
****************************************************************/
