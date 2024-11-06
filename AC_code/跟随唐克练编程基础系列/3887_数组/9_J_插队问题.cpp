#include <cstdio>

int a[100];

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (i < x - 1) printf("%d ", a[i]);
        else if (i == x - 1) printf("%d ", a[n - 1]);
        else printf("%d ", a[i - 1]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10137
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
