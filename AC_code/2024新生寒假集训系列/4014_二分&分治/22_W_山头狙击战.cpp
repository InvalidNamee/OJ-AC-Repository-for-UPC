#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int a[100010];
int n, m;

bool check(int mid) {
    int t = 0;
    if (a[1] <= m) t = 0;
    else t = a[1] - m;
    for (int i = 2; i <= n; ++i) {
        if (a[i] - t <= m) {
            if (mid > a[i] - t) return false;
            else t += mid;
        }
        else {
            if (mid > a[i] - t) return false;
            else t += max(a[i] - t - m, mid);
        }
    }
    return true;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = 1000000000;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 14865
	Language: C++
	Result: 正确
	Time:23 ms
	Memory:2612 kb
****************************************************************/