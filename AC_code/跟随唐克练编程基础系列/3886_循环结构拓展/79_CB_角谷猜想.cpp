#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    do {
        if (n & 1) printf("%d*3+1=%d\n", n, n * 3 + 1), n = n * 3 + 1;
        else printf("%d/2=%d\n", n, n / 2), n = n / 2;
    } while (n != 1);
    return 0;
}
/**************************************************************
	Problem: 10040
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
