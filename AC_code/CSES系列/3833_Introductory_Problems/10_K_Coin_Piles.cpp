#include <cstdio>
#include <cmath>
#include <iostream>
// #define int long long

using namespace std;

signed main() {
    // freopen("data", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t --) {
        int n, m;
        scanf("%d%d", &n, &m);
        if (n == m) {
            printf(n % 3 ? "NO\n" : "YES\n");
        }
        else {
            if (n < m) swap(n, m);
            if (n < ((n - m) << 1)) printf("NO\n");
            else {
                n -= ((n - m) << 1);
                printf(n % 3 ? "NO\n" : "YES\n");
            } 
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23002
	Language: C++
	Result: 正确
	Time:81 ms
	Memory:2024 kb
****************************************************************/