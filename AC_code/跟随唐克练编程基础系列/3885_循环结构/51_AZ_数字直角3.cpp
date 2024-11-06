#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i; --i) {
        for (int j = 1; j <= i; ++j) printf("%d", j);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 22496
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
