#include <cstdio>
#include <algorithm>

using namespace std;

struct Node
{
    int a, b, c;
} a[100010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].a);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].b);
        a[i].c = a[i].a - a[i].b;
    }
    sort(a + 1, a + n + 1, [](Node a, Node b) {
        return a.c > b.c;
    });
    long long s = 0;
    for (int i = 1; i <= k; ++i) s += a[i].a;
    for (int i = k + 1; i <= n; ++i) s += a[i].b;
    printf("%lld\n", s);
    return 0;
}
/**************************************************************
	Problem: 21337
	Language: C++
	Result: 正确
	Time:31 ms
	Memory:2412 kb
****************************************************************/
