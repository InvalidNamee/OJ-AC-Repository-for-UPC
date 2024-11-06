#include <cstdio>
#include <cstring>

int main() {
    int m, n, t = 1;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        t = (t * m) % 1000;
    }
    printf("%03d\n", t);
    return 0;
}
/**************************************************************
	Problem: 8676
	Language: C++
	Result: 正确
	Time:6 ms
	Memory:1236 kb
****************************************************************/
