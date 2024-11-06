#include <cstdio>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    int t = 1, d = 1;
    while (d <= n) {
        for (int i = 1; i <= t && d <= n; ++i, ++d) {
            ans += t;
        }
        t++;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 1755
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
