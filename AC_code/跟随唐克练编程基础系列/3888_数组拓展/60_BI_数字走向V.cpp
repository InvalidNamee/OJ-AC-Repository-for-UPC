#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i; --i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", i * n - j + 1);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22597
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
