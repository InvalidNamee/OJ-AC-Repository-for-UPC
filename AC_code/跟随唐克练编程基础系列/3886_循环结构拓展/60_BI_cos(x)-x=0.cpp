#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double x1, x0;
    scanf("%lf", &x1);
    do {
        x0 = x1;
        x1 = cos(x0);
    } while (fabs(x0 - x1) >= 0.000001);
    printf("%.6f\n", x1);
    return 0;
}
/**************************************************************
	Problem: 10035
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2244 kb
****************************************************************/
