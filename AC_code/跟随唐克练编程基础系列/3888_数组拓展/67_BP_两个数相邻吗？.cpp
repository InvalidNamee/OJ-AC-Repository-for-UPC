#include <cstdio>
#include <iostream>

using namespace std;

int a[200][200];

int main() {
    int n, m, b, c;
    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d%d", &b, &c);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == b) {
                bool flag = false;
                if (i - 1 >= 0 && a[i - 1][j] == c) flag = true;
                if (j - 1 >= 0 && a[i][j - 1] == c) flag = true;
                if (i + 1 < n && a[i + 1][j] == c) flag = true;
                if (j + 1 < n && a[i][j + 1] == c) flag = true;
                if (flag) {
                    printf("Y\n");
                    return 0;
                }
            }
        }
    }
    printf("N\n");
    return 0;
}
/**************************************************************
	Problem: 22604
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2376 kb
****************************************************************/
