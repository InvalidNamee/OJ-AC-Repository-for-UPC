#include <cstdio>
#include <algorithm>

using namespace std;

int L, n, m;
int a[50010];

bool check(int mid) {
    int l = 0, cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] - l < mid) cnt++;
        else l = a[i];
    }
    return cnt <= m;
}

int main() {
    scanf("%d%d%d", &L, &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    a[++n] = L;
    int l = 0, r = L;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 16947
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1432 kb
****************************************************************/