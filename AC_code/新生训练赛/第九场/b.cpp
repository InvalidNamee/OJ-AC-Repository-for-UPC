#include <cstdio>
#include <stack>

using namespace std;

__int128_t pow(long long n, long long k) {
    __int128_t res = 1, t = n;
    while (k) {
        if (k & 1) res *= t;
        t *= t;
        k >>= 1;
    }
    return res;
}

void print(__int128_t a) {
    stack<int> t;
    while (a) t.push(a % 10), a /= 10;
    while (!t.empty()) printf("%d", t.top()), t.pop();
}

int main() {
    long long n, h;
    scanf("%lld%lld", &n, &h);
    if (n == 1) {
        printf("%lld %lld\n", h, n);
        return 0;
    }
    print((pow(n, h) - 1) / (n - 1));
    printf(" ");
    print(pow(n, h - 1));
    return 0;
}