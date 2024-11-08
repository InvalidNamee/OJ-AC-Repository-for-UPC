#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
int f[1000010], a[110];

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    f[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i - a[j] >= 0) f[i] = ((long long)f[i] + f[i - a[j]]) % MOD;
        }
    }
    printf("%d\n", f[x]);
    return 0;
}
/**************************************************************
	Problem: 23052
	Language: C++
	Result: 正确
	Time:2644 ms
	Memory:5928 kb
****************************************************************/
