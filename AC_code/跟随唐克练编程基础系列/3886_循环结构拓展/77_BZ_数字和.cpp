#include <cstdio>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    while (n) {
        s += n % 10;
        n /= 10;
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 8664
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
