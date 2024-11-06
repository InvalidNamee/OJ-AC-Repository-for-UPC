#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int f[20];

int main() {
    int n;
    scanf("%d", &n);
    f[0] = f[1] = 1;
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("%d\n", f[n]);
    return 0;
}

/**************************************************************
	Problem: 20250
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
