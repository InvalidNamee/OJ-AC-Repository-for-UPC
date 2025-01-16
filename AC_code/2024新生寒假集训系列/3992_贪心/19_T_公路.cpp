#include <cstdio>
#include <cmath>

long long v[100010];
int a[100010];

int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    for (int i = 2; i <= n; ++i) {
        scanf("%lld", &v[i]);
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    double pt = 0;
    int i = 1;
    long long m = 0;
    while (true) {
        int p = -1;
        for (int j = i + 1; j <= n; ++j) {
            if (a[j] < a[i]) {
                p = j;
                break;
            }
        }
        if (p == -1) {
            m += (long long)ceil(((double)v[n] - v[i]) / d - pt) * a[i];
            break;
        }
        else {
            m += (long long)ceil(((double)v[p] - v[i]) / d - pt) * a[i];
            pt = ceil(((double)v[p] - v[i]) / d - pt) - (((double)v[p] - v[i]) / d - pt);
            i = p;
        }
    }
    printf("%lld\n", m);
    return 0;
}
/**************************************************************
	Problem: 22910
	Language: C++
	Result: 正确
	Time:22 ms
	Memory:2408 kb
****************************************************************/