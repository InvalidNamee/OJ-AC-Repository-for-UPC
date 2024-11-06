#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int k = n - i - j;
            if (k < j) break;
            printf("%d=%d+%d+%d\n", n, i, j, k);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22523
	Language: C++
	Result: 正确
	Time:21 ms
	Memory:1236 kb
****************************************************************/
