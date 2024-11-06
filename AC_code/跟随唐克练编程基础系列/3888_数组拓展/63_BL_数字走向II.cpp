#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", i * n + j);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22600
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
