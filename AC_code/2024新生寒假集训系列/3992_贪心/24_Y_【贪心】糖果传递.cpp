#include <cstdio>
#include <algorithm>

using namespace std;

long long a[1000010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    long long m = a[n] / n, res = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] -= m * i;
    }
    sort(a + 1, a + n + 1);
    m = a[n / 2 + 1];
    for (int i = 1; i <= n; ++i) {
        res += abs(a[i] - m);
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 4736
	Language: C++
	Result: 正确
	Time:221 ms
	Memory:9048 kb
****************************************************************/