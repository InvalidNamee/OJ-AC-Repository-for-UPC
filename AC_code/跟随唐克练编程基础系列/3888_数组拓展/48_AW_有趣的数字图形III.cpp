#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) printf("     ");
        for (int j = 1; j <= i; ++j) printf("%5d", j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22585
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
