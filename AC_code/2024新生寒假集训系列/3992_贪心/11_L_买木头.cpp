#include <cstdio>
#include <queue>

using namespace std;

int l[10010], s[10010];
int n, m;

bool check(int mid) {
    long long cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += l[i] / mid * s[i];
    }
    if (mid == 273) printf("%lld\n", cnt);
    return cnt >= m;
}

int main() {
    scanf("%d%d%d%d", &n, &m, &l[1], &s[1]);
    for (int i = 2; i <= n; ++i) {
        l[i] = (((long long)l[i - 1] * 37011 + 10193) % 10000) + 1;
        s[i] = (((long long)s[i - 1] * 73011 + 24793) % 100) + 1;
    }
    int l = 1, r = 11000;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 10429
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1316 kb
****************************************************************/