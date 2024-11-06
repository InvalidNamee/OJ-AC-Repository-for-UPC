#include <cstdio>
#include <iostream>

using namespace std;

int a[100010];

int main() {
    int n, m, l;
    scanf("%d%d%d", &n, &m, &l);
    int lsp = 0;
    for (int i = 1; i <= n; ++i) {
        int p;
        scanf("%d", &p);
        a[i] = a[i - 1] + p - lsp - 1;
        lsp = p;
    }
    a[n + 1] = a[n] + l - lsp;
    n++;
    if (m > n - 1) printf("%d\n", l);
    else {
        int ans = 0;
        for (int i = 1; i + m <= n; ++i) {
            ans = max(ans, a[i + m] - a[i - 1] + m);
        }
        printf("%d\n", ans);
    }
    return 0;
}
/**************************************************************
	Problem: 14311
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2612 kb
****************************************************************/
