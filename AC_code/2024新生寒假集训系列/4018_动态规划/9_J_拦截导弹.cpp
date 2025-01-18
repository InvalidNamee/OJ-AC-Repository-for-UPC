#include <cstdio>
#include <iostream>

using namespace std;

int a[100010], b[100010];
int tr[50010];


void add(int u, int val) {
    for (; u <= 50000; u += u & -u) {
        tr[u] = max(tr[u], val);
    }
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u) {
        res = max(res, tr[u]);
    }
    return res;
}

int main() {
    int n = 1;
    while (scanf("%d", &a[n]) == 1) n++;
    n--;

    for (int i = n; i; --i) {
        add(a[i], query(a[i]) + 1);
    }
    printf("%d\n", query(50000));

    int k = 0;
    b[0] = 0x3f3f3f3f;
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        for (int j = 1; j <= k; ++j) {
            if (a[i] <= b[j] && b[j] < b[p]) {
                p = j;
            }
        }
        if (p) b[p] = a[i];
        else b[++k] = a[i];
    }
    printf("%d\n", k);
    return 0;
}

/*
1 2 3 3 3 3 3 5
*/
/**************************************************************
	Problem: 1618
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:3200 kb
****************************************************************/