#include <cstdio>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);
    while (n != 1) {
        if (n & 1) {
            n *= 3;
            n += 1;
        }
        else n >>= 1;
        printf("%lld ", n);
    }
    return 0;
}
/**************************************************************
	Problem: 22992
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:1120 kb
****************************************************************/