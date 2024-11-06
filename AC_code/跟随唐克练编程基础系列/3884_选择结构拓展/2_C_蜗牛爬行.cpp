#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 6) printf("%d\n", 5 * n);
    else printf("%d\n", 30 + (n - 6) * 7);
    return 0;
}
/**************************************************************
	Problem: 23550
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
