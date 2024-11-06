#include <cstdio>
#include <iostream>

using namespace std;

int a[101][101];

int main() {
    a[0][0] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = n; i; --i) {
        for (int j = 1; j <= (n - i) * 2; ++j) putchar(' ');
        for (int j = 1; j <= i; ++j) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 9842
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2260 kb
****************************************************************/
