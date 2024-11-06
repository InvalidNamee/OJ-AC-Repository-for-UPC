#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", a + b);
    }
    return 0;
}
/**************************************************************
	Problem: 18773
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
