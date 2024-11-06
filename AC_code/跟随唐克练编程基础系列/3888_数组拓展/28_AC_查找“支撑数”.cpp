#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int s, t;
    scanf("%d%d", &s, &t);
    for (int i = 2; i < n; ++i) {
        int u;
        scanf("%d", &u);
        if (t > u && t > s) printf("%d\n", t);
        s = t;
        t = u;
    }
    return 0;
}
/**************************************************************
	Problem: 22565
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
