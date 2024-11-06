#include <cstdio>
#include <iostream>

using namespace std;

int a[310][310];

int main() {
    int n, m, mxl;
    scanf("%d%d", &n, &m);
    mxl = n > m ? m : n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &a[i][j]);
            a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    int cnt = 0;
    for (int k = 2; k <= mxl; ++k) {
        for (int i = k; i <= n; ++i) {
            for (int j = k; j <= m; ++j) {
                cnt += abs(k * k - 2 * (a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k])) <= 1;
            }
        }
    }
    printf("%d\n", cnt);    
    return 0;
}
/**************************************************************
	Problem: 6007
	Language: C++
	Result: 正确
	Time:29 ms
	Memory:2596 kb
****************************************************************/
