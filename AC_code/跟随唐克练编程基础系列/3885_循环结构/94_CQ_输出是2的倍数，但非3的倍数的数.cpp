#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0 && i % 3 != 0) printf("%d\n", i);
    }
    return 0;
}

/**************************************************************
	Problem: 22461
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2220 kb
****************************************************************/
