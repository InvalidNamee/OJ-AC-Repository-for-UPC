#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
// #define int long long

using namespace std;

void dfs(int n, int l, int r, int m) {
    if (n == 1) {
        printf("%d %d\n", l, r);
        return;
    }
    dfs(n - 1, l, m, r);
    printf("%d %d\n", l, r);
    dfs(n - 1, m, r, l);
}

signed main() {
    // freopen("data", "r", stdin);
    int n; 
    scanf("%d", &n);
    printf("%d\n", (1 << n) - 1);    
    dfs(n, 1, 3, 2);
    return 0;
}
/**************************************************************
	Problem: 23005
	Language: C++
	Result: 正确
	Time:43 ms
	Memory:2024 kb
****************************************************************/