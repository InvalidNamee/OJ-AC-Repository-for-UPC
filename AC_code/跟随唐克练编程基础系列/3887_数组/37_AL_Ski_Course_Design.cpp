#include <cstdio>
#include <algorithm>

using namespace std;

int a[1010];

int main() {
    int n, mn = 0x3f3f3f3f, mx = -0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    int ans = 0x3f3f3f3f;
    for (int i = mn; i <= mx; ++i) {
        int s = 0;
        for (int j = 1; j <= n; ++j) {
            if (a[j] < i) s += (i - a[j]) * (i - a[j]);
            else if (a[j] > i + 17) s += (a[j] - i - 17) * (a[j] - i - 17);
        }
        // printf("%d\n", s);
        ans = min(ans, s);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 8057
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
