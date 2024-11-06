#include <cstdio>
#include <algorithm>

using namespace std;

int a[1010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int mx = 0;
    for (int l = 1, r = 1; r <= n; ++r) {
        while (a[r] - a[l] > k) l++;
        mx = max(r - l + 1, mx);
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 4257
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
