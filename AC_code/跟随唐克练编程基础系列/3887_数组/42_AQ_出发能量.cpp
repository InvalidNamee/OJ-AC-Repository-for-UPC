#include <cstdio>

int main() {
    int n, s = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a;
        scanf("%d", &a);
        s += a;
        ans = ans > -s ? ans : -s;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 9816
	Language: C++
	Result: 正确
	Time:113 ms
	Memory:1236 kb
****************************************************************/
