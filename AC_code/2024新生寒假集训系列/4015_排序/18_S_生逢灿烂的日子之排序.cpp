#include <cstdio>
#include <algorithm>

using namespace std;

long long a[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        printf("%12lld\n", a[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 5302
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/