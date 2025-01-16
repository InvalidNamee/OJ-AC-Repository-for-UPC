#include <cstdio>

const int N = 100010;

int tr[N], n;
int a[N], b[N];

void add(int u, int v) {
    for (; u <= n; u += u & -u) {
        tr[u] = tr[u] > v ? tr[u] : v;
    }
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u) {
        res = res > tr[u] ? res : tr[u];
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int p;
        scanf("%d", &p);
        a[p] = i;
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
        b[i] = a[b[i]];
        add(b[i], query(b[i] - 1) + 1);
    }
    printf("%d\n", query(n));
    return 0;
}
/**************************************************************
	Problem: 23855
	Language: C++
	Result: 正确
	Time:27 ms
	Memory:2408 kb
****************************************************************/