#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a >= 10 || b >= 20) printf("True\n");
        else printf("False\n");
    }
    return 0;
}
/**************************************************************
	Problem: 12604
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1236 kb
****************************************************************/
