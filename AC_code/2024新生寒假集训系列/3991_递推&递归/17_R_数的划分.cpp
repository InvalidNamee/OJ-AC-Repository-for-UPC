#include <cstdio>

int cnt;

void dfs(int u, int l, int d, int n) {
    if (u == d + 1) {
        if (!n) cnt++;
        return;
    }
    for (int i = l; i <= n; ++i) {
        // printf("dfsing %d %d %d %d\n", u + 1, i, d, n - i);
        dfs(u + 1, i, d, n - i);
        // printf("end %d %d %d %d\n", u + 1, i, d, n - i);
    }
}


int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    dfs(1, 1, k, n);
    printf("%d\n", cnt);
    return 0;
}

/**************************************************************
	Problem: 1625
	Language: C++
	Result: 正确
	Time:326 ms
	Memory:1236 kb
****************************************************************/