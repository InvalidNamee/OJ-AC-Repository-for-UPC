#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j) printf("  1");
            else printf("  0");
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22603
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
