#include <cstdio>

int a[30];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] & 1) printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        if (!(a[i] & 1)) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22562
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
