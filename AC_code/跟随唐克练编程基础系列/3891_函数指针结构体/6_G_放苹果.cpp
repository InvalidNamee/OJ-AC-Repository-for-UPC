#include <cstdio>

int a[15], cnt;
int m, n;

void dfs(int x, int ls) {
    if (x == n + 1) {
        if (ls == 0) cnt++;
        return;
    }
    for (int i = a[x - 1]; i <= ls; ++i) {
        a[x] = i;
        dfs(x + 1, ls - i);
        a[x] = 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        cnt = 0;
        scanf("%d%d", &m, &n);
        dfs(1, m);
        printf("%d\n", cnt);
    }
    return 0;
}
/**************************************************************
	Problem: 2194
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
