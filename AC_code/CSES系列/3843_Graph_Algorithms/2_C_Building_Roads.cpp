#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <algorithm>

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

int ver[400010], ne[400010], head[100010], tot;
bool v[100010];
int ans[100010], t;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dfs(int x) {
    if (v[x]) return;
    v[x] = true;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        dfs(y);
    }
}

int main() {
    int n = read(), m = read();
    for (int i = 1; i <= m; ++i) {
        int x = read(), y = read();
        add(x, y), add(y, x);
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i]) {
            ans[++t] = i;
            dfs(i);
        }
    }
    printf("%d\n", t - 1);
    for (int i = 2; i <= t; ++i) {
        printf("%d %d\n", ans[1], ans[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 23071
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:7068 kb
****************************************************************/