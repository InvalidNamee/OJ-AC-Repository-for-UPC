#include <cstdio>

int a[100];

int main() {
    int n, x, rk = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        rk += a[i] > x;
    }
    printf("%d\n", ++rk);
    return 0;
}
/**************************************************************
	Problem: 22634
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
