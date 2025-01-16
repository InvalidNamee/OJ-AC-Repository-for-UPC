#include <cstdio>

int a[9];
int b[93], t;

void dfs(int u, const int x) {
    if (u == 9) {
        b[++t] = x;
        // printf("%d\n", x);
        return;
    }
    for (int i = 1; i <= 8; ++i) {
        bool f = true;
        for (int j = 1; j < u; ++j) {
            if (a[j] == i || i + u == a[j] + j || i - u == a[j] - j) {
                f = false;
                break;
            }
        }
        if (f) {
            a[u] = i;
            dfs(u + 1, x * 10 + i);
        }
    }
}

int main() {
    dfs(1, 0);
    int q;
    scanf("%d", &q);
    while (q--) {
        int k;
        scanf("%d", &k);
        printf("%d\n", b[k]);
    }
    return 0;
}
/**************************************************************
	Problem: 23876
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/