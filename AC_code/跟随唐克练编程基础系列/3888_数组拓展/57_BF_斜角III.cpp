#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            printf("%3c", 'A' + j - 1);
        }
        for (int j = 1; j < i; ++j) {
            printf("%3c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22594
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
