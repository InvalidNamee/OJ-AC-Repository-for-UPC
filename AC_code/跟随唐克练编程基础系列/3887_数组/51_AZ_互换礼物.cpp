#include <cstdio>

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9846
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
