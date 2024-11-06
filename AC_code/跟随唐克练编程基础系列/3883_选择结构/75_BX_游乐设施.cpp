#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    if (a > b) swap(a, b);
    printf(a < 60.0 && b >= 60.0 ? "green\n" : "red\n");
    return 0;
}
/**************************************************************
	Problem: 22409
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
