#include <cstdio>
#include <iostream>

using namespace std;

int a[110][110];

int main() {
    a[1][1] = 1;
    int n;
    scanf("%d", &n);
    printf("%6d\n", a[1][1]);
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%6d", a[i][j] = a[i - 1][j] + a[i - 1][j - 1]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 9840
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2268 kb
****************************************************************/
