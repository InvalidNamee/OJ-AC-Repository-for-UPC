#include <cstdio>
#include <cmath>

bool valid(long long mid, int days) {
    return mid * mid + mid * 4 <= days;
}

int main() {
    int days;
    scanf("%d", &days);
    long long l = 0, r = __INT_MAX__;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (valid(mid, days)) l = mid;
        else r = mid - 1;
    }
    printf("%lld\n", l);
    return 0;
}

/**************************************************************
	Problem: 1027
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
