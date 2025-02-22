#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 200010;

int tr[N << 2];

void pushup(int u) {
    tr[u] = max(tr[u << 1], tr[u << 1 | 1]);
}

void modify(int u, int l, int r, int p, int v) {
    if (l == r && l == p) {
        tr[u] += v;
        return;
    }
    int mid = l + r >> 1;
    if (p <= mid) modify(u << 1, l, mid, p, v);
    else modify(u << 1 | 1, mid + 1, r, p, v);
    pushup(u);
}

int query(int u, int l, int r, int v) {
    if (l == r) return l;
    int mid = l + r >> 1;
    if (tr[u << 1] >= v) return query(u << 1, l, mid, v);
    else return query(u << 1 | 1, mid + 1, r, v);
}

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        modify(1, 1, n, i, t);
    }
    while (q--) {
        int t;
        scanf("%d", &t);
        if (t > tr[1]) printf("0 ");
        else {
            int p = query(1, 1, n, t);
            modify(1, 1, n, p, -t);
            printf("%d ", p);  
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23118
	Language: C++
	Result: 正确
	Time:188 ms
	Memory:5348 kb
****************************************************************/