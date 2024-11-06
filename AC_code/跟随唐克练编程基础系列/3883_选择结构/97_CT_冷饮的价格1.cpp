#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%.1f\n", (n >= 10 ? 2.0 : 2.2) * n);
    return 0;
}
/**************************************************************
	Problem: 22431
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
