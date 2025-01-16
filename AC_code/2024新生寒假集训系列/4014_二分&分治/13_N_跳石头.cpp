#include <cstdio>

int L, n, m;
int a[50010];

bool check(int mid) {
    int t = 0, l = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] - l < mid) t++;
        else l = a[i];
    }
    return t <= m;
}

int main() {
    scanf("%d%d%d", &L, &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    a[++n] = L;
    int l = 0, r = L;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 1752
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:1432 kb
****************************************************************/