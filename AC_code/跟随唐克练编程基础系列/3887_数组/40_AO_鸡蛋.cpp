#include <cstdio>

const int N = 100010;

int a[N], s[8];

int main() {
    int n;
    long long ans = 0;
    scanf("%d", &n);
    s[7] = 1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        a[i] = (((a[i] + a[i - 1]) % 7) + 7) % 7;
        if (a[i] == 0) a[i] = 7;
        ans += s[a[i]];
        s[a[i]]++;
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 20521
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:1628 kb
****************************************************************/
