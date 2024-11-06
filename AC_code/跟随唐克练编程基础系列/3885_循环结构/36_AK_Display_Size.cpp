#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = sqrt(n); i; --i) {
        if (n / i * i == n) {
            printf("%d %d\n", i, n / i);
            return 0;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 19716
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
