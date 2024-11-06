#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%.2f\n", sqrt(pow(a - c, 2) + pow(b - d, 2)));
    return 0;
}
/**************************************************************
	Problem: 23379
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
