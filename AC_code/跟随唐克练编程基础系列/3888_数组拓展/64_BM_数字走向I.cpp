#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", i * n + j);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22601
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
