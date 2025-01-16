#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];
int n, m;

bool check(int mid) {
    int l = 1, cnt = 1;
    for (int i = 1; i <= n; ++i) {
        if (a[i] - a[l] < mid) continue;
        else {
            cnt++;
            l = i;
        }
    }
    return cnt >= m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = a[n];
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 8161
	Language: C++
	Result: 正确
	Time:24 ms
	Memory:1628 kb
****************************************************************/