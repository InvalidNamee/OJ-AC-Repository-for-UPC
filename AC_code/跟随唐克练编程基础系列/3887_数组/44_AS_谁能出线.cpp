#include <cstdio>
#include <iostream>

using namespace std;

int a[11];

int main() {
    int mx = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (a[i] == mx) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 1937
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
