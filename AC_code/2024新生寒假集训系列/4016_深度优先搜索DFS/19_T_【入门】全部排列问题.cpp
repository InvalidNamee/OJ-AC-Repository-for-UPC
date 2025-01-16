#include <cstdio>

int a[6], n;

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; ++i) {
            printf("%d", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        a[u] = i;
        dfs(u + 1);
    }
}

int main() {
    scanf("%d", &n);
    dfs(0);
    return 0;
}
/**************************************************************
	Problem: 23867
	Language: C++
	Result: 正确
	Time:26 ms
	Memory:1236 kb
****************************************************************/