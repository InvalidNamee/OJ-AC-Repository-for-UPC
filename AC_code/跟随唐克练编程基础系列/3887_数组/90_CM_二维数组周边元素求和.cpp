#include <cstdio>

int main() {
    int n, m, s = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int t;
            scanf("%d", &t);
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) s += t;
        }
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 9843
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
