#include <cstdio>

int a[40];
bool f[20010];

int main() {
    int n, c;
    scanf("%d%d", &c, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    f[0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = c; j >= a[i]; --j) {
            f[j] |= f[j - a[i]];
        }
    }
    for (int i = c; i >= 0; --i) {
        if (f[i]) {
            printf("%d\n", c - i);
            break;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1650
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1256 kb
****************************************************************/