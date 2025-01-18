#include <cstdio>

int f[32769];

int main() {
    f[0] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 3; ++i) {
        for (int j = i; j <= n; ++j) {
            f[j] += f[j - i];
        }
    }
    printf("%d\n", f[n]);
    return 0;
}
/**************************************************************
	Problem: 23904
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/