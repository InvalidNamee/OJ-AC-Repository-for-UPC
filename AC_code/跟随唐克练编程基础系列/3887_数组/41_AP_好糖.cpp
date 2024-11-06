#include <cstdio>

int a[200010];

int main() {
    int n, s1 = 0, s2 = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (i & 1) s1 += a[i];
        else s2 += a[i];
    }
    int l1 = 0, l2 = 0;
    for (int i = 1; i <= n; ++i) {
        if (i & 1) {
            s1 -= a[i];
            if (s2 + l1 == s1 + l2) cnt++;
            l1 += a[i];
        }
        else {
            s2 -= a[i];
            if (s2 + l1 == s1 + l2) cnt++;
            l2 += a[i];
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 20522
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2020 kb
****************************************************************/
