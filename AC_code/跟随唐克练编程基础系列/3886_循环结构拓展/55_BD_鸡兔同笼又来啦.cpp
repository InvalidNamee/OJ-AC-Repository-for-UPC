#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int m;
        scanf("%d", &m);
        if (m & 1) printf("0 0\n");
        else printf("%d %d\n", (m >> 2) + (m >> 1 & 1), m >> 1);
    }
    return 0;
}
/**************************************************************
	Problem: 8666
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
