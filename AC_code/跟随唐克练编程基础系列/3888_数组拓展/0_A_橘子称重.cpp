#include <cstdio>

int main() {
    int m, n;
    double s = 0.0;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        s += t;
    }
    printf("%.1f\n", s / n * m);
    return 0;
}
/**************************************************************
	Problem: 22537
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
