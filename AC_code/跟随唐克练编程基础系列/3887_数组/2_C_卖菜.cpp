#include <cstdio>

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (i == 0) printf("%d ", a[i] + a[i + 1] >> 1);
        else if (i == n - 1) printf("%d\n", a[i] + a[i - 1] >> 1);
        else printf("%d ", (a[i] + a[i - 1] + a[i + 1]) / 3);
    }
    return 0;
}
/**************************************************************
	Problem: 10044
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
