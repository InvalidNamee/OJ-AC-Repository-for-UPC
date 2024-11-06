#include <cstdio>

int a[1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        int p = 0, d = 0x3f3f3f3f;
        for (int j = 1; j <= n; ++j) {
            if (j == i) continue;
            if (a[j] > a[i] && a[j] - a[i] < d) {
                d = a[j] - a[i];
                p = j;
            }
        }
        printf("%d\n", p);
    }
    return 0;
}
/**************************************************************
	Problem: 10158
	Language: C++
	Result: 正确
	Time:5 ms
	Memory:1240 kb
****************************************************************/
