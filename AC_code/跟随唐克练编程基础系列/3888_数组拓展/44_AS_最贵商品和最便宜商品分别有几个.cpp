#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, mx = -0x3f3f3f3f, a = 0, mn = 0x3f3f3f3f, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t > mx) mx = t, a = 1;
        else if (t == mx) a++;
        if (t < mn) mn = t, b = 1;
        else if (t == mn) b++;
    }
    printf("%d %d\n", a, b);
    return 0;
}
/**************************************************************
	Problem: 22581
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
