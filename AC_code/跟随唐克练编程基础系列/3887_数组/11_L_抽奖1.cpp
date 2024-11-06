#include <cstdio>

int a[10000];

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] = i;
    }
    scanf("%d", &x);
    printf("%d\n", a[x]);
    return 0;
}
/**************************************************************
	Problem: 10143
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/
