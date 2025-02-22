#include <cstdio>
#define int long long

signed main() {
    // freopen("data", "r", stdin);
    int n; 
    scanf("%lld", &n);
    if (n == 1) printf("1\n");
    else if (n <= 3) printf("NO SOLUTION\n");
    else {
        for (int i = 2; i <= n; i += 2) {
            printf("%d ", i);
        }
        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22996
	Language: C++
	Result: 正确
	Time:690 ms
	Memory:1120 kb
****************************************************************/