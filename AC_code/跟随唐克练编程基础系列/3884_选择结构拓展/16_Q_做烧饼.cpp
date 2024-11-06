#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    if (n <= k) printf("%d\n", 2);
    else printf("%d\n", (n * 2 + k - 1) / k);
    return 0;
}
/**************************************************************
	Problem: 21363
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
