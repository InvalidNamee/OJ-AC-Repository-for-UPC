#include <cstdio>
#include <cmath>

int main() {
    int n, m, ans = 0;
    scanf("%d%d", &n, &m);
    long long s = (long long)n * m;
    for (int i = (int)sqrt(s); i > 1; --i) {
        if ((long long)i * (s / i) == s) ans++;
    }
    printf("%d\n", ans - 1);
    return 0;
}
/**************************************************************
	Problem: 22517
	Language: C++
	Result: 正确
	Time:105 ms
	Memory:1236 kb
****************************************************************/
