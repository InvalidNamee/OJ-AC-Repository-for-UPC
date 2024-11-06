#include <cstdio>

int a[20];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (i >= (n >> 1) && a[i] != a[n - i - 1]) {
            printf("NO\n");
            return 0;
        } 
    }
    printf("YES\n");
    return 0;
}
/**************************************************************
	Problem: 22549
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
