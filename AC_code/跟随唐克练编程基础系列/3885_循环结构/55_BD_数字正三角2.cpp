#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) putchar(' ');
        for (int j = 1; j <= 2 * i - 1; ++j) printf("%d", j);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 22492
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
