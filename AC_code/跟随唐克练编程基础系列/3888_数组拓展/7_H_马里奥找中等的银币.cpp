#include <cstdio>
#include <cmath>

int a[1000];

int main() {
    int n, p;
    double ave = 0.0, mn = __INT_MAX__;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        ave += a[i];
    }
    ave /= n;
    for (int i = 0; i < n; ++i) {
        if (fabs(ave - a[i]) < mn) {
            mn = fabs(ave - a[i]);
            p = i;
        }
    }
    printf("%d\n", a[p]);
    return 0;
}
/**************************************************************
	Problem: 22544
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1240 kb
****************************************************************/
