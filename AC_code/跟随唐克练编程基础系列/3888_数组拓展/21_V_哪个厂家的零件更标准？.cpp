#include <cstdio>

int main() {
    int n;
    int s1 = 0, s2 = 0, d1 = 0, d2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s1 += t * t;
        d1 += t;
    }
    s1 = s1 * n - d1 * d1;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s2 += t * t;
        d2 += t;
    }
    s2 = s2 * n - d2 * d2;
    if (s1 < s2) printf("jia\n");
    else printf("yi\n");
    return 0;
}
/**************************************************************
	Problem: 22558
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
