#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    m = a[n / 2 + 1];
    long long s = 0;
    for (int i = 1; i <= n; ++i) {
        s += abs(m - a[i]);
    }
    printf("%lld\n", s);
    return 0;
}
/**************************************************************
	Problem: 7787
	Language: C++
	Result: 正确
	Time:19 ms
	Memory:1628 kb
****************************************************************/