#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l, r;
    scanf("%d%d%d", &n, &l, &r);
    if (r - l + 1 >= n || r % n < l % n) printf("%d\n", n - 1);
    else printf("%d\n", r % n);
    return 0;
}

/**************************************************************
	Problem: 21028
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
