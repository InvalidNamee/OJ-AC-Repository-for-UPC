#include <cstdio>

int a[1000];

int main() {
    int n, mx = -0x3f3f3f3f, mn = 0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        mx = mx > a[i] ? mx : a[i];
        mn = mn < a[i] ? mn : a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == mx) printf("%d ", a[i] << 1);
        else if (a[i] == mn) printf("%d ", a[i] + 1);
        else printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22546
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
