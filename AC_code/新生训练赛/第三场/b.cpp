#include <cstdio>
#include <cmath>

int c[100000];
int n;

bool judge(int i) {
    return (int)sqrt(i) * (int)sqrt(i) == i;
}

long long calc(long long a, long long t) {
    int l = a / t, r = a % t;
    long long res = 0;
    if (judge(a / t)) res += c[r];
    res += (c[l - 1] - c[t / 10 - 1]) * c[t - 1];
    return res;
}


int main() {
    scanf("%d", &n);
    int l = pow(10, n / 2);
    for (int i = 0; i < l; ++i) {
        if (judge(i)) c[i] = 1;
        c[i] += c[i - 1];
    }
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", calc(b, l) - calc(a - 1, l));
    return 0;
}