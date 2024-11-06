#include <cstdio>

int f[31];

int main() {
    f[0] = f[1] = 1;
    int n;
    scanf("%d", &n);
    printf("1 ");
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
        printf("%d ", f[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10135
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
