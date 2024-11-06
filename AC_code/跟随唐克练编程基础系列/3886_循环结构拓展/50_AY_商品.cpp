#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int mx = -0x3f3f3f3f, mxc = 0;
    int mn = 0x3f3f3f3f, mnc = 0;
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (t > mx) mx = t, mxc = 1;
        else if (t == mx) mxc++;
        if (t < mn) mn = t, mnc = 1;
        else if (t == mn) mnc++;
    }
    printf("%d %d\n", mxc, mnc);
    return 0;
}
/**************************************************************
	Problem: 22536
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
