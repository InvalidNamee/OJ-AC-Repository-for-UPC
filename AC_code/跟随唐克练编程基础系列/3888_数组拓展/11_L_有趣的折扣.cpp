#include <cstdio>
#include <iostream>

using namespace std;

int a[100];

int main() {
    int n, mx = 0;
    double s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == mx) {
            mx = 0;
            s += 0.9 * a[i];
        }
        else s += a[i];
    }
    printf("%.1f\n", s * 0.9);
    return 0;
}
/**************************************************************
	Problem: 22548
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
