#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];
int L, n, k;

bool check(int mid) {
    int l = a[1], cnt = 0;
    for (int i = 2; i <= n; ++i) {
        while (a[i] - l > mid) {
            cnt++;
            l += mid;
        }
        l = a[i];
    }
    return cnt <= k;
}

int main() {
    scanf("%d%d%d", &L, &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = a[n];
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 23858
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1628 kb
****************************************************************/