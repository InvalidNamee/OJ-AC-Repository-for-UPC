#include <cstdio>
#include <iostream>

using namespace std;

int a[60];
int f[60][2];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        f[i][0] = max(f[i - 1][0], f[i - 1][1]);
        f[i][1] = f[i - 1][0] + a[i];
    }
    printf("%d\n", max(f[n][0], f[n][1]));
    return 0;
}
/**************************************************************
	Problem: 23888
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/