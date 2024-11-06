#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int a, b, c, t;
} a[100];

int main() {
    int t = 0, x, n;
    scanf("%d%d", &x, &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
        a[i].t = i;
    }
    sort(a, a + n, [](Node a, Node b) {
        return a.a == b.a ? a.t < b.t : a.a < b.a;
    });
    for (int i = 0; i < n; ++i) {
        if (a[i].b == x) {
            t = max(t, a[i].a + 6) + abs(a[i].b - a[i].c) * 3 + 6;
        }
        else {
            t = max(t, a[i].a) + abs(x - a[i].b) * 3 + 12 + abs(a[i].b - a[i].c) * 3; 
        }
        x = a[i].c;
        if (i == 0) t -= a[i].a;
    }
    printf("%d\n", t);
    return 0;
}
/**************************************************************
	Problem: 5809
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/
