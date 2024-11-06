#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) printf("%4d", 1);
        for (int j = 1; j <= n - i + 1; ++j) printf("%4d", j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1622
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
