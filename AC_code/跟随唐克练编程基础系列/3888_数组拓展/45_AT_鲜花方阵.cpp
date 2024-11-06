#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1 >> 1; ++i) printf("  1");
    printf("  0");
    for (int i = 0; i < n - 1 >> 1; ++i) printf("  1");
    printf("\n");
    for (int i = 1; i < n - 1 >> 1; ++i) {
        for (int j = 0; j < (n - 2 * i - 1) >> 1; ++j) printf("  1");
        printf("  0");
        for (int j = 0; j < i * 2 - 1; ++j) printf("  1");
        printf("  0");
        for (int j = 0; j < (n - 2 * i - 1) >> 1; ++j) printf("  1");
        printf("\n");
    }
    printf("  0");
    for (int i = 0; i < n - 2 >> 1; ++i) printf("  1");
    printf("  0");
    for (int i = 0; i < n - 2 >> 1; ++i) printf("  1");
    printf("  0\n");
    for (int i = n - 2 >> 1; i; --i) {
        for (int j = 0; j < (n - 2 * i - 1) >> 1; ++j) printf("  1");
        printf("  0");
        for (int j = 0; j < i * 2 - 1; ++j) printf("  1");
        printf("  0");
        for (int j = 0; j < (n - 2 * i - 1) >> 1; ++j) printf("  1");
        printf("\n");
    }
    for (int i = 0; i < n - 1 >> 1; ++i) printf("  1");
    printf("  0");
    for (int i = 0; i < n - 1 >> 1; ++i) printf("  1");
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22582
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
