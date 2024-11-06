#include <cstdio>

int a[50];

int main() {
    int n, s = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    s /= n;
    for (int i = 0; i < n; ++i) {
        if (s - a[i] > 0) ans += s - a[i];
    }
    printf("The minimum number of moves is %d.\n", ans);
    return 0;
}
/**************************************************************
	Problem: 9837
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
