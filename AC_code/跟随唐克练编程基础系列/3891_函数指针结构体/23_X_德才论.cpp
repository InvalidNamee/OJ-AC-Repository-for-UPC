#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int num, d, c, flag;
} a[100010];

int f(int d, int c, int h) {
    if (d >= h && c >= h) return 1;
    else if (d >= h) return 2;
    else if (c < h && d >= c) return 3;
    else return 4;
}

int main() {
    int n, l, h;
    int cnt = 0;
    scanf("%d%d%d", &n, &l, &h);
    for (int i = 1; i <= n; ++i) {
        int tn, td, tc;
        scanf("%d%d%d", &tn, &td, &tc);
        if (td >= l && tc >= l) a[cnt++] = {tn, td, tc, f(td, tc, h)};
    }
    sort(a, a + cnt, [](Node a, Node b) {
        if (a.flag != b.flag) return a.flag < b.flag;
        else if (a.d + a.c != b.d + b.c) return a.d + a.c > b.d + b.c;
        else if (a.d != b.d) return a.d > b.d;
        else return a.num < b.num;
    });
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i) {
        printf("%8d %d %d\n", a[i].num, a[i].d, a[i].c);
    }
    return 0;
}
/**************************************************************
	Problem: 18141
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2804 kb
****************************************************************/
