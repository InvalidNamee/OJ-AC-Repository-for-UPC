#include <cstdio>

int a[1000010];
int n, m;

bool check(int mid) {
    long long t = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] - mid > 0) t += a[i] - mid;
    }
    return t >= m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 1, r = 1000000000;
    while (l < r) {
        int mid = (long long)l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 23857
	Language: C++
	Result: 正确
	Time:151 ms
	Memory:5144 kb
****************************************************************/