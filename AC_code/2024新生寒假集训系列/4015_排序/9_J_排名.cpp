#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int a, b, c, d, r;
} a[50];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d%d", &a[i].a, &a[i].b, &a[i].c, &a[i].d);
    }
    sort(a + 1, a + n + 1, [](Node a, Node b) {
        return a.b > b.b;
    });
    for (int i = 1; i <= n; ++i) {
        a[i].r = i;
    }
    sort(a + 1, a + n + 1, [](Node a, Node b) {
        return a.d > b.d;
    });
    for (int i = 1; i <= n; ++i) {
        printf("%4d%5d%5d%5d%5d%5d\n", a[i].a, a[i].b, a[i].c, a[i].d, a[i].r, i);
    }
    return 0;
}
/**************************************************************
	Problem: 14467
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/