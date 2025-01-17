#include <cstdio>

int fa[110], siz[110];

int getfa(int x) {
    return x == fa[x] ? x : fa[x] = getfa(fa[x]);
}

void merge(int x, int y) {
    x = getfa(x), y = getfa(y);
    if (x == y) return;
    fa[y] = x;
    siz[x] += siz[y];
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        fa[i] = i;
        siz[i] = 1;
    }
    for (int i = 1; i <= k; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        merge(x, y);
    }
    int cnt = 0, mx = 0;
    for (int i = 1; i <= n; ++i) {
        if (i == fa[i]) {
            cnt++;
            mx = mx > siz[i] ? mx : siz[i];
        }
    }
    printf("%d %d\n", cnt, mx);
    return 0;
}
/**************************************************************
	Problem: 13970
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/