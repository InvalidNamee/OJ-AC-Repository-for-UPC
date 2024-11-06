#include <cstdio>

int main() {
    int n;
    int a = 1, b = 2;
    scanf("%d", &n);
    if (n == 1) {
        printf("1\n");
        return 0;
    }
    for (int i = 3; i <= n; ++i) {
        int t = b;
        b = a + b;
        a = t;
    }
    printf("%d\n", b);
    return 0;
}
/**************************************************************
	Problem: 5234
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
