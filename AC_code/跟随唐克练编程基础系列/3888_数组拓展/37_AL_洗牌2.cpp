#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int n, m;
int a[60], b[60];

void tan() {
    memcpy(b, a, sizeof(b));
    for (int i = 1; i <= n; ++i) {
        if (i & 1) a[i] = b[(i - 1) / 2 + 1];
        else a[i] = b[(n / 2) + (i / 2)];
    }
}

void qie(int l, int r) {
    memcpy(b, a, sizeof(b));
    int t = 0;
    for (int i = l; i <= r; ++i) a[++t] = b[i];
    for (int i = 1; i < l; ++i) a[++t] = b[i];
    for (int i = r + 1; i <= n; ++i) a[++t] = b[i];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    while (m--) {
        int op;
        scanf("%d", &op);
        if (op) {
            int l, r;
            scanf("%d%d", &l, &r);
            qie(l, r);
        }
        else tan();
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

/*
1 2 3 4 5 6 7

1 5 2 6 3 7 4
*/
/**************************************************************
	Problem: 22574
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
