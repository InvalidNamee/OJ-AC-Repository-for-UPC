#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;

const int N = 200010;

int a[N];

int main() {
    int n;
    scanf("%d", &n);
    long long s = 0;
    int mx = INT_MIN;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
        mx = max(mx, a[i]);
    }
    s -= mx;
    if (s <= mx) printf("%lld\n", (long long)mx << 1);
    else printf("%lld\n", s + mx);
    return 0;
}
/**************************************************************
	Problem: 23032
	Language: C++
	Result: 正确
	Time:28 ms
	Memory:2020 kb
****************************************************************/
