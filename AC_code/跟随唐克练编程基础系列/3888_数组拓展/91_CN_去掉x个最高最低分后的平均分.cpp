#include <cstdio>
#include <algorithm>

using namespace std;

int a[10000];

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int s = 0;
    for (int i = x; i < n - x; ++i) {
        s += a[i];
    }
    printf("%.1f\n", (double)s / (n - 2 * x));
    return 0;
}
/**************************************************************
	Problem: 22628
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1276 kb
****************************************************************/
