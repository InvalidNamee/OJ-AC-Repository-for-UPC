#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    if (k & 1) {
        long long l = n / k;
        printf("%lld\n", l * (l - 1) * (l - 2) + l + l * (l - 1) * 3);
    }
    else {
        long long even = n / k, odd = n / (k / 2) - even;
        printf("%lld\n", even * (even - 1) * (even - 2) + even + even * (even - 1) * 3 + odd * (odd - 1) * (odd - 2) + odd + odd * (odd - 1) * 3);
    }
    return 0;
}

/*
a + b = t1 * k
b + c = t2 * k
a + c = t3 * k

a + b + c = (t1 + t2 + t3) * k / 2

a = (t1 - t2 + t3) / 2 * k
b = (t1 + t2 - t3) / 2 * k
c = (-t1 + t2 + t3) / 2 * k

*/