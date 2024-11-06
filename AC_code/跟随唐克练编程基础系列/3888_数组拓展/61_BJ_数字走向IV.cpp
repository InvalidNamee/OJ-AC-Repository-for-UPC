#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = n * (n - 1) + i; j > 0; j -= n) printf("%3d", j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22598
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
