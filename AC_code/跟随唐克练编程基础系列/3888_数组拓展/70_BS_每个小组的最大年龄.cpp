#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        int mx = 0;
        for (int j = 0; j < m; ++j) {
            int t;
            scanf("%d", &t);
            mx = max(mx, t);
        }
        printf("%d\n", mx);
    }
    return 0;
}
/**************************************************************
	Problem: 22607
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
