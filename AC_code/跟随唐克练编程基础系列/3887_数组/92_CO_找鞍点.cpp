#include <cstdio>

int a[10][10];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool flag = true;
            for (int k = 0; k < n; ++k) {
                if (k == i) continue;
                if (a[i][j] > a[k][j]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) continue;
            for (int k = 0; k < m; ++k) {
                if (k == j) continue;
                if(a[i][j] < a[i][k]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                printf("a[%d][%d]=%d\n", i, j, a[i][j]);
                return 0;
            }
        }
    }
    printf("Not Found\n");
    return 0;
}
/**************************************************************
	Problem: 9833
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
