#include <cstdio>
#define int long long


signed main() {
    // freopen("data", "r", stdin);
    int n; 
    scanf("%lld", &n);
    printf("0\n");
    for (int i = 2; i <= n; ++i) {
        int t = i * i;
        printf("%lld\n", ((t * (t - 1)) >> 1) - (i - 2) * (i - 1) * 4);
    }
    return 0;
}
/**************************************************************
	Problem: 22998
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:1120 kb
****************************************************************/