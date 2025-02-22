#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>

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
bool v[100010];
int pre[200010];
queue<int> q;
stack<int> st;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void print(int x, int l) {
    if (x == 1) {
        printf("%d\n", l);
        return;
    }
    print(pre[x], l + 1);
    printf("%d ", pre[x]);
}

int main() {
    int n = read(), m = read();
    for (int i = 1; i <= m; ++i) {
        int x = read(), y = read();
        add(x, y), add(y, x);
    }
    q.push(1);
    v[1] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (x == n) {
            print(x, 1);
            printf("%d\n", x);
            return 0;
        }
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            st.push(y);
        }
        while (!st.empty()) {
            int y = st.top();
            st.pop();
            if (v[y]) continue;
            v[y] = true;
            pre[y] = x;
            q.push(y);
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}

/**************************************************************
	Problem: 23072
	Language: C++
	Result: 正确
	Time:26 ms
	Memory:8456 kb
****************************************************************/