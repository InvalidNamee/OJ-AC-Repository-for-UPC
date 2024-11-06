#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int l = sqrt(n);
    for (int i = 1; i <= l; ++i) {
        if (n % i == 0) printf("%d=%d*%d\n", n, i, n / i);
    }
    return 0;
}
/**************************************************************
	Problem: 22529
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
