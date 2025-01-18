#include <cstdio>

int a[10010];
bool f[10010];

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
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
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23903
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1284 kb
****************************************************************/