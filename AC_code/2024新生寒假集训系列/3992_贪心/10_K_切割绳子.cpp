#include <cstdio>

int a[110];
int n, m;

bool check(int mid) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += a[i] / mid;
    }
    return cnt >= m;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int l = 0, r = 1000000;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    if (!l) printf("Failed\n");
    else printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 23084
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/