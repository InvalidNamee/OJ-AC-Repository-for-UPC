#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    n >>= 1;
    printf("%d\n", (n / 2) * (n - n / 2));
    return 0;
}
/**************************************************************
	Problem: 22512
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
