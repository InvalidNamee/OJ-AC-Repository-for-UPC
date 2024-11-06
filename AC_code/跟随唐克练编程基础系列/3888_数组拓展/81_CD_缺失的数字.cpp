#include <cstdio>

bool a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; ++i) {
        int t;
        scanf("%d", &t);
        a[t] = true;
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i]) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22618
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1336 kb
****************************************************************/
