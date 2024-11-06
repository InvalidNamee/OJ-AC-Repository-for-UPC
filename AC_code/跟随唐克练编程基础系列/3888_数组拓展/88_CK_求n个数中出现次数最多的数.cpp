#include <cstdio>

int a[11];

int main() {
    int n, p = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a[t]++;
        if (a[t] > a[p]) p = t;
    }
    printf("%d\n", p);
    return 0;
}
/**************************************************************
	Problem: 22625
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
