#include <cstdio>
#include <iostream>

using namespace std;

int R[110], a[110];

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i == 1) scanf("%d", &R[i]);
        else R[i] = (R[i - 1] * 6807 + 2831) % 201701;
        a[i] = R[i] % 10;
    }
    for (int i = 1; i <= n; ++i) {
        int l = 0, r = 0;
        for (int j = 1; j < i; ++j) {
            l = max(l, a[j]);
        }
        for (int j = i + 1; j <= n; ++j) {
            r = max(r, a[j]);
        }
        s += max(0, min(l, r) - a[i]);
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 10407
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/