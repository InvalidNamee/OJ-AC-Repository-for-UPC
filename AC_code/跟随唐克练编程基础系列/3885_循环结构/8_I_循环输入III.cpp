#include <cstdio>

int main() {
    long long a, b;
    while (scanf("%lld%lld", &a, &b), a && b) {
        printf("%lld\n", a + b);
    }
    return 0;
}
/**************************************************************
	Problem: 18775
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
