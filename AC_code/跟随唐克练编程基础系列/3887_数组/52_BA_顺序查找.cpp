#include <cstdio>

int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; ++i) {
        int u;
        scanf("%d", &u);
        if (u == t) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("Not Found\n");
    return 0;
}
/**************************************************************
	Problem: 9831
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
