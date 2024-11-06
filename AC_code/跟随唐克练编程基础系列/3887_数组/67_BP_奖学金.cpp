#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int n;
    int a, b, c, s;
} a[300];

bool cmp(const Node &a, const Node &b) {
    if (a.s == b.s) {
        if (a.a == b.a) return a.n < b.n;
        else return a.a > b.a;
    }
    else return a.s > b.s;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        a[i].n = i + 1;
        scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
        a[i].s = a[i].a + a[i].b + a[i].c;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 5; ++i) {
        printf("%d %d\n", a[i].n, a[i].s);
    }
    return 0;
}
/**************************************************************
	Problem: 3568
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1248 kb
****************************************************************/
