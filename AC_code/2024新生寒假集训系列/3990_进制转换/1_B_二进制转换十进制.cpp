#include <cstdio>

int main() {
    int t;
    long long ans = 0;
    while (scanf("%1d", &t) == 1) {
        ans = ans << 1 | t;
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23820
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/