#include <cstdio>
#include <algorithm>

using namespace std;

double a[10010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lf", &a[i]);
    }
    sort(a + 1, a + n + 1);
    printf("%.2lf\n", a[(n + 1) / 2]);
    return 0;
}
/**************************************************************
	Problem: 3567
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1316 kb
****************************************************************/