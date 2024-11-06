#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", n % k == 0 ? 0 : 1);
    return 0;
}

/**************************************************************
	Problem: 12128
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
