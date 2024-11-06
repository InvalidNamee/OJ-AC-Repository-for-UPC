#include <cstdio>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    int s, t;
    scanf("%d%d", &s, &t);
    for (int i = 2; i < n; ++i) {
        int u;
        scanf("%d", &u);
        if (t > u && t > s) cnt++;
        s = t;
        t = u;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22556
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
