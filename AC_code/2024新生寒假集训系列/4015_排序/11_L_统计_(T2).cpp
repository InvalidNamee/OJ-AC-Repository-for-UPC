#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010], b[100010];

void print(__int128_t a) {
    int t[50], l = 0;
    while (a) {
        t[++l] = a % 10;
        a /= 10;
    }
    for (int i = l; i; --i) {
        printf("%d", t[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i], &b[i]);
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    __int128_t s = 0, cur = 0;
    for (int i = 1; i <= n; ++i) {
        s += (__int128_t)(i - 1) * a[i] - cur;
        cur += a[i];
    }
    cur = 0;
    for (int i = 1; i <= n; ++i) {
        s += (__int128_t)(i - 1) * b[i] - cur;
        cur += b[i];
    }
    print(s);
    return 0;
}
/**************************************************************
	Problem: 15902
	Language: C++
	Result: 正确
	Time:43 ms
	Memory:2024 kb
****************************************************************/