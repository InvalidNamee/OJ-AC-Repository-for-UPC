#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

const int N = 300010;

ll s[N];
int q[N];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &s[i]);
        s[i] += s[i - 1];
    }
    int hh = 0, tt = -1;
    ll res = 0;
    q[++tt] = 0;
    for (int i = 1; i <= n; ++i) {
        while (hh <= tt && i - q[hh] > m) hh++;
        res = max(res, s[i] - s[q[hh]]);
        while (hh <= tt && s[q[tt]] >= s[i]) tt--;
        q[++tt] = i;
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 14832
	Language: C++
	Result: 正确
	Time:35 ms
	Memory:5736 kb
****************************************************************/
