#include <cstdio>

int main() {
    int n, mx = 0, now = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        now += a - b;
        mx = mx < now ? now : mx;
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 21042
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
