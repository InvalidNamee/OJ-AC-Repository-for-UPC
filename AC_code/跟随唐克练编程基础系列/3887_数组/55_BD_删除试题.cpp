#include <cstdio>

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; ++i) {
        int u;
        scanf("%d", &u);
        if (u == x) continue;
        printf("%d ", u);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10142
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
