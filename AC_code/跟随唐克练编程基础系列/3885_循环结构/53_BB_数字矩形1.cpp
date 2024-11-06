#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) printf("%d", i);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 22494
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
