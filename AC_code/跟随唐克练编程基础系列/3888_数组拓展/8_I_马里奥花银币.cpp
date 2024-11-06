#include <cstdio>

int a[1000];

int main() {
    int n, mx = -0x3f3f3f3f, mn = 0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        mx = mx > a[i] ? mx : a[i];
        mn = mn < a[i] ? mn : a[i];
    }
    int s = 0, sp = 0;
    for (int i = 0; i < n; ++i) {
        s += a[i];
        if (a[i] == mx) sp += a[i], mx = -1;
        if (a[i] == mn) sp += a[i];
    }
    printf("%d\n%d\n", sp, s - sp);
    return 0;
}
/**************************************************************
	Problem: 22545
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
