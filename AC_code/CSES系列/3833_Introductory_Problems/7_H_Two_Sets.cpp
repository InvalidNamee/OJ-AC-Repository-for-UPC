#include <cstdio>
#define int long long



signed main() {
    // freopen("data", "r", stdin);
    int n, s; 
    scanf("%lld", &n);
    s = n * (n + 1) / 2;
    if (s & 1) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
        if (n & 1) {
            printf("%lld\n", (n >> 1) + 1);
            printf("1 2 ");
            for (int i = 1; i <= (n - 3) / 2; i += 2) {
                printf("%lld %lld ", i + 3, n - i + 1);
            }
            printf("\n%lld\n", n >> 1);
            printf("3 ");
            for (int i = 2; i <= (n - 3) / 2; i += 2) {
                printf("%lld %lld ", i + 3, n - i + 1);
            }
            printf("\n");
        }
        else {
            printf("%lld\n", n >> 1);
            for (int i = 1; i <= n / 2; i += 2) {
                printf("%lld %lld ", i, n - i + 1);
            }
            printf("\n%lld\n", n >> 1);
            for (int i = 2; i <= n / 2; i += 2) {
                printf("%lld %lld ", i, n - i + 1);
            }         
            printf("\n"); 
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22999
	Language: C++
	Result: 正确
	Time:203 ms
	Memory:1120 kb
****************************************************************/