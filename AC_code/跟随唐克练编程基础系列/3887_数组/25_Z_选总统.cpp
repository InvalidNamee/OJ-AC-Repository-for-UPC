#include <cstdio>
#include <algorithm>

using namespace std;

int a[110];

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    n = (n >> 1) + 1;
    for (int i = 0; i < n; ++i) {
        ans += (a[i] >> 1) + 1;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 3279
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
