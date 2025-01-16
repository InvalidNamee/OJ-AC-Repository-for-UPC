#include <cstdio>
#include <algorithm>

using namespace std;

int t[510], f[110];

int main() {
    int n, r;
    scanf("%d%d", &n, &r);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t[i]);
    }
    sort(t + 1, t + n + 1);
    int s = 0;
    f[0] = 0x3f3f3f3f;
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        for (int j = 1; j <= r; ++j) {
            if (f[j] < f[p]) p = j;
        }
        f[p] += t[i];
        s += f[p];
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 23836
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/