#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, mn = 0x3f3f3f3f, ans = -0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        ans = max(ans, t - mn);
        mn = min(mn, t);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 5321
	Language: C++
	Result: 正确
	Time:117 ms
	Memory:2220 kb
****************************************************************/
