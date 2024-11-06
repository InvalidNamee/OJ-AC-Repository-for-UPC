#include <cstdio>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 23556
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
