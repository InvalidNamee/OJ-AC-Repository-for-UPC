#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int a[10000];

int main() {
    int n;
    scanf("%d", &n);
    int mn = -10000, mx = 10000;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d%d", &t, &a[i]);
    }
    sort(a, a + n);
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += abs(a[i] - a[i >> 1]);
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 9826
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2260 kb
****************************************************************/
