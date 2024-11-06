#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 40000; ++i) {
        long long t = (long long)(i + 1) * i >> 1;
        if ((t - n) % 2 == 0 && t - n <= 2 * i && t - n > 0) {
            printf("%lld %d\n", (t - n) >> 1, i);
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 12429
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
