#include <cstdio>

int a[10010];
int n, m;

bool check(int mid) {
    int cur = 0, cnt = 1;
    for (int i = 1; i <= n; ++i) {
        if (a[i] > mid) return false;
        if (cur + a[i] > mid) {
            cnt++;
            cur = a[i];
        }
        else cur += a[i];
    }
    return cnt <= m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 1, r = 10000000;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 13847
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/