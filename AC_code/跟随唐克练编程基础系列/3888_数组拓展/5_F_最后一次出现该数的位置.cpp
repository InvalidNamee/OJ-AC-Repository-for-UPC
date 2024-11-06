#include <cstdio>

int a[21];

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int p = -1;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == x) p = i;
    }
    printf("%d\n", p);
    return 0;
}
/**************************************************************
	Problem: 22542
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
