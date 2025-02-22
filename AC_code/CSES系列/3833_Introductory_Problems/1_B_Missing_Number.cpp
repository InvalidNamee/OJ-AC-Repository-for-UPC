#include <cstdio>

int a[200010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] ++;
    }
    for (int i = 1; i <= n; ++i) {
        if (!a[i]) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22993
	Language: C++
	Result: 正确
	Time:132 ms
	Memory:1900 kb
****************************************************************/