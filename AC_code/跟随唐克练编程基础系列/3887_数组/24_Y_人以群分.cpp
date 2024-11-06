#include <cstdio>
#include <algorithm>

using namespace std;

long long s[1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &s[i]);
    }
    sort(s + 1, s + n + 1);
    int b = n >> 1, a = n - b;
    long long d = 0;
    for (int i = 1; i <= n; ++i) {
        if (i <= b) d -= s[i];
        else d += s[i];
    }
    printf("Outgoing:%d\nIntroverted:%d\nDiff=%lld\n", a, b, d);
    return 0;
}
/**************************************************************
	Problem: 3295
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/
