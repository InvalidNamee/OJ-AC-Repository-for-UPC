#include <cstdio>

double a[1010];
int n, k;

bool check(double mid) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += (int)(a[i] / mid);
    }
    return cnt >= k;
}

int main() {
    double l = 0, r = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lf", &a[i]);
        r = r > a[i] ? r : a[i];
    }
    while (r - l > 0.001) {
        double mid = (l + r) / 2;
        if (check(mid)) l = mid;
        else r = mid;
    }
    printf("%.2f\n", l);
    return 0;
}
/**************************************************************
	Problem: 10341
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1244 kb
****************************************************************/