#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    n = unique(a + 1, a + n + 1) - a - 1;
    if (k > n) printf("NO RESULT\n");
    else printf("%d\n", a[k]);
    return 0;
}
/**************************************************************
	Problem: 3563
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1628 kb
****************************************************************/