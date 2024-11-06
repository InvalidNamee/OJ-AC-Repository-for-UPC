#include <cstdio>

typedef long long ll;

int main() {
    ll n, a, b;
    scanf("%lld%lld%lld", &n, &a, &b);
    int l = 0, r = 500000;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (a * mid + b * (mid - 1) * mid / 2 < n) l = mid;
        else r = mid - 1; 
    }
    if (a * l + b * (l - 1) * l / 2 == n) printf("%lld\n", a + (l - 1) * b);
    else printf("%lld\n", n - a * l - b * (l - 1) * l / 2);
    return 0;
}
/**************************************************************
	Problem: 12601
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
