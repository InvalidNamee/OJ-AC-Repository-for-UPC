#include <cstdio>

const int N = 100010;

int ver[N], ne[N], head[N], odeg[N], tot;
int mxp = 0, mx = 0;

void add(int x, int y) {
    odeg[x]++;
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        for (int j = 0; j < t; ++j) {
            int y;
            scanf("%d", &y);
            add(i, y);
        }
    }
    for (int x = 1; x <= n; ++x) {
        int cnt = 0;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            cnt += odeg[y];
        }
        if (mx < cnt) mxp = x, mx = cnt;
    }
    printf("%d %d\n", mxp, mx);
    return 0;
}
/**************************************************************
	Problem: 5498
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2800 kb
****************************************************************/
