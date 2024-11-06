#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf(m + n > 9 ? "error\n" : "%d\n", m + n);
    return 0;
}

/**************************************************************
	Problem: 6560
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
