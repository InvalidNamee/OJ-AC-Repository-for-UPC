#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int a[10000];

bool judge(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int m = abs(a[n - k] - a[k - 1]);
    printf("%s\n%d\n", (judge(m) ? "YES" : "NO"), m);
    return 0;
}
/**************************************************************
	Problem: 22635
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1276 kb
****************************************************************/
