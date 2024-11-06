#include <cstdio>

int a[11];

int main() {
    int n;
    scanf("%d", &n);
    scanf("%d%d", &a[0], &a[1]);
    for (int i = 2; i < n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 2; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (a[i] != t) {
            printf("%d\n", i + 1);
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22570
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
