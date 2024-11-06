#include <cstdio>

int main() {
    int n, m, mx = -0x3f3f3f3f, x = 0, y = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int t;
            scanf("%d", &t);
            if (t > mx) {
                x = i, y = j, mx = t;
            }
        }
    }
    printf("%d %d %d\n", mx, x, y);
    return 0;
}
/**************************************************************
	Problem: 9835
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
