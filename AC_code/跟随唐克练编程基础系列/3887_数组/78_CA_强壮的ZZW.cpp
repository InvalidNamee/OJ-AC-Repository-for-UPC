#include <cstdio>
#include <iostream>

using namespace std;

int v[4010], d[4010];
int f[15010];

int main() {
    int n, s;
    scanf("%d%d", &n, &s);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &v[i], &d[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = s; j >= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]]+ d[i]);
            ans = max(f[j], ans);
        }
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 9819
	Language: C++
	Result: 正确
	Time:50 ms
	Memory:2312 kb
****************************************************************/
