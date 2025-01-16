#include <cstdio>
#include <algorithm>

using namespace std;

int a[30010];

int main() {
    int n, q;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    scanf("%d", &q);
    while (q--) {
        int k;
        scanf("%d", &k);
        printf("%d\n", a[k]);
    }
    return 0;
}
/**************************************************************
	Problem: 3572
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1356 kb
****************************************************************/