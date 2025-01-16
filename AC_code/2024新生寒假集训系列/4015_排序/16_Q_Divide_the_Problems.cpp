#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    printf("%d\n", a[n / 2 + 1] - a[n / 2]);
    return 0;
}
/**************************************************************
	Problem: 14508
	Language: C++
	Result: 正确
	Time:21 ms
	Memory:1628 kb
****************************************************************/