#include <cstdio>

int a[1000010];

int main() {
    int n, q;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = 1; i <= n; ++i) {
        if (a[i] == q) continue;
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10152
	Language: C++
	Result: 正确
	Time:179 ms
	Memory:5144 kb
****************************************************************/
