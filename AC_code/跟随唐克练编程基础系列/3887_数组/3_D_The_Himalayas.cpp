#include <cstdio>

int a[50];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, cnt = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
/**************************************************************
	Problem: 20518
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
