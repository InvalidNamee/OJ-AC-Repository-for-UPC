#include <cstdio>

int a[110];

int main() {
    int n, s = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    s /= n;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == s) continue;
        else a[i + 1] += a[i] - s, cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 1485
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/