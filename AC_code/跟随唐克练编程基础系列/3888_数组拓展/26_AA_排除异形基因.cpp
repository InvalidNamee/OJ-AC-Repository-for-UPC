#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t * t % 7 == 1) continue;
        else printf("%d ", t);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22563
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
