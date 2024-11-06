#include <cstdio>
#include <iostream>

using namespace std;

int a[30];

int main() {
    int n, p = 0, mx = -0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (i > 2 && a[i] - a[i - 2] > mx) mx = a[i] - a[i - 2], p = i - 2;
    }
    printf("%d\n", p);
    return 0;
}
/**************************************************************
	Problem: 9836
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
