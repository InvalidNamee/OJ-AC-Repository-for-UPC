#include <cstdio>
#include <iostream>

using namespace std;

int a[10000];

int main() {
    int n, s = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    s /= n;
    for (int i = 0; i < n; ++i) {
        cnt += a[i] > s;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10138
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2260 kb
****************************************************************/
