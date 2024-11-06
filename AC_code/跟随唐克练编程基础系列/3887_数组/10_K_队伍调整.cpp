#include <cstdio>

int a[100];

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (i == x - 1) continue;
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10140
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
