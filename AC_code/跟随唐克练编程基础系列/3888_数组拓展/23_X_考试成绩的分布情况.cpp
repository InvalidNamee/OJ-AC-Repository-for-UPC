#include <cstdio>

int a[100];

int main() {
    int n;
    double s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    s /= n;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= s) cnt++;
    }
    printf("%.1f %d %d\n", s, cnt, n - cnt);
    return 0;
}
/**************************************************************
	Problem: 22560
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
