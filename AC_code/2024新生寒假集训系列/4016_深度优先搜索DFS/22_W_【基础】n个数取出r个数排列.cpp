#include <cstdio>

int a[6], n, k;
bool v[6];

void dfs(int u) {
    if (u == k) {
        for (int i = 0; i < k; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i - 1]) {
            a[u] = i;
            v[i - 1] = true;
            dfs(u + 1);
            v[i - 1] = false;
        }
    }
}

int main() {
    scanf("%d%d", &n, &k);
    dfs(0);
    return 0;
}
/**************************************************************
	Problem: 23869
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/