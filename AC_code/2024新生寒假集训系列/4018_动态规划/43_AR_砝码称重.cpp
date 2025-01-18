#include <cstdio>

int t[] = {1, 2, 3, 5, 10, 20};
int a[1010], n;
bool f[1010];

int main() {
    for (int i = 0; i < 6; ++i) {
        int tt;
        scanf("%d", &tt);
        while (tt--) {
            a[++n] = t[i];
        }
    }
    f[0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1000; j >= a[i]; --j) {
            f[j] |= f[j - a[i]];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= 1000; ++i) {
        cnt += f[i];
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 3554
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/