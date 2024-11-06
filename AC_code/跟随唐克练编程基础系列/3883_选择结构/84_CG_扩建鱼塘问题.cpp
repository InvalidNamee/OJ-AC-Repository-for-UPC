#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", abs(a - b) * max(a, b));
    return 0;
}
/**************************************************************
	Problem: 22418
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
