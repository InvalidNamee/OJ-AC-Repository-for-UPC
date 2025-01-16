#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n;
    scanf("%d%d", &n, &a[1]);
    for (int i = 2; i <= n; ++i) {
        a[i] = (a[i - 1] * 6807 + 2831) % 201701;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = (a[i] % 100) + 1;
    }
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] += a[i - 1];
        ans += a[i];
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 10411
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1628 kb
****************************************************************/