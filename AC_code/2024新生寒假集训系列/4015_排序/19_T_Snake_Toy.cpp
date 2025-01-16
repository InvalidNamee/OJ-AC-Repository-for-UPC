#include <cstdio>
#include <algorithm>

using namespace std;

int a[60];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1, [](int a, int b) {
        return a > b;
    });
    int res = 0;
    for (int i = 1; i <= k; ++i) {
        res += a[i];
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 6579
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/