#include <cstdio>

int main() {
    int n, cnt = 0;
    long ls = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        long t;
        scanf("%ld", &t);
        if (t > ls) cnt++, ls = t;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10465
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
