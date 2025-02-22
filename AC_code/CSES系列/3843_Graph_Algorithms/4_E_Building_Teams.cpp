#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

inline int read() {
    char c = getchar();
    int res = 0;
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) {
        res = res * 10 + c - 48;
        c = getchar();
    }
    return res;
}

int ver[400010], ne[400010], head[200010], tot;
int v[100010];

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

bool dfs(int x, int fa) {
    if (v[x]) return (v[x] ^ v[fa]) & 1;
    v[x] = v[fa] + 1;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa) continue;
        if (!dfs(y, x)) return false;
    }
    return true;
}

int main() {
    int n = read(), m = read();
    for (int i = 1; i <= m; ++i) {
        int x = read(), y = read();
        add(x, y), add(y, x);
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i]) {
            if (!dfs(i, 0)) {
                printf("IMPOSSIBLE\n");
                return 0;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", v[i] & 1 ? 1 : 2);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 23073
	Language: C++
	Result: 正确
	Time:43 ms
	Memory:10416 kb
****************************************************************/