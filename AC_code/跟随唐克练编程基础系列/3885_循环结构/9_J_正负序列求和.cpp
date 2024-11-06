#include <cstdio>

int main() {
    int n;
    double ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i & 1) ans += (double)1 / i;
        else ans -= (double)1 / i;
    }
    printf("%.4lf\n", ans);
    return 0;
}
/**************************************************************
	Problem: 8678
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:1236 kb
****************************************************************/
