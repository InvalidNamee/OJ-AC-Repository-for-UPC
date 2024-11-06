#include <cstdio>
#include <iostream>
#include <list>

using namespace std;

inline int read() {
    int res = 0;
    char c = getchar();
    if (c == EOF) return EOF;
    while (!isdigit(c) && c != EOF) c = getchar();
    if (c == EOF) return EOF;
    while (isdigit(c)) res = res * 10 + c - 48, c = getchar();
    return res; 
}

list<int> q[150010];

int main() {
    int n, qq;
    while (n = read(), n != EOF) {
        qq = read();
        for (int i = 1; i <= n; ++i) q[i].clear();
        while (qq--) {
            int op = read();
            if (op == 1) {
                int u = read(), w = read(), val = read();
                if (w) q[u].push_back(val);
                else q[u].push_front(val);
            }
            else if (op == 2) {
                int u = read(), w = read();
                if (q[u].empty()) printf("-1\n");
                else if (w) printf("%d\n", q[u].back()), q[u].pop_back();
                else printf("%d\n", q[u].front()), q[u].pop_front();
            }
            else {
                int u = read(), v = read(), w = read();
                if (w) q[v].reverse();
                q[u].splice(q[u].end(), q[v]);
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 21429
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:5740 kb
****************************************************************/
