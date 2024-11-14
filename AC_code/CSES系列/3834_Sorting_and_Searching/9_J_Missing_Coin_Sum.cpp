#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int a[200010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (ans + 1 < a[i]) {
            break;
        }
        ans += a[i];
    }
    printf("%lld\n", ans + 1);
    return 0;
}
/**************************************************************
	Problem: 23019
	Language: C++
	Result: 正确
	Time:254 ms
	Memory:2808 kb
****************************************************************/
