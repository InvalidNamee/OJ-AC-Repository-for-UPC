#include <cstdio>

int a[11];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a[t]++;
    }
    for (int i = 1; i <= 10; ++i) {
        if (a[i]) printf("%d %d\n", i, a[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 22624
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
