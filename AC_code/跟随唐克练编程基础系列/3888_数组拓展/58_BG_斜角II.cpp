#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            printf("%3d", j);
        }
        for (int j = n - 1; j > n - i; --j) {
            printf("%3d", j);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22595
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
