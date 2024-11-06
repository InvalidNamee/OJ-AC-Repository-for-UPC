#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i; --i) {
        for (int j = i; j < n; ++j) printf(" ");
        printf("%d", i);
        for (int j = 0; j < 2 * i - 1; ++j) printf(" ");
        printf("%d", i + 3);
        printf("\n");
    }
    for (int i = 0; i < n; ++i) printf(" ");
    printf("0\n");
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) printf(" ");
        printf("%d", i + 3);
        for (int j = 0; j < 2 * i - 1 - (i + 3 > 9); ++j) printf(" ");
        printf("%d", i);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 10373
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
