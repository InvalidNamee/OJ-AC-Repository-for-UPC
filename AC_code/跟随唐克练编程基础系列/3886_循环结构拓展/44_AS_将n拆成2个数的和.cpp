#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int l = n >> 1;
    for (int i = 0; i <= l; ++i) {
        printf("%d=%d+%d\n", n, i, n - i);
    }
    return 0;
}
/**************************************************************
	Problem: 22530
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
