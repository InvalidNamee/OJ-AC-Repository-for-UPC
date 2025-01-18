#include <cstdio>
#include <iostream>

using namespace std;

int f[110][2];
int a[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        f[i][0] = f[i][1] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            if (a[j] < a[i]) {
                f[i][0] = max(f[i][0], f[j][0] + 1);
            }
        }
    }
    for (int i = n; i; --i) {
        for (int j = n; j > i; --j) {
            if (a[j] < a[i]) {
                f[i][1] = max(f[i][1], f[j][1] + 1);
            }
        }
    }
    int res = n;
    for (int i = 1; i <= n; ++i) {
        res = min(res, n - f[i][0] - f[i][1] + 1);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23889
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/