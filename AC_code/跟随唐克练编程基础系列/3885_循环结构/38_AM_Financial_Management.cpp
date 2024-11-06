#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double s = 0.0;
    for (int i = 0; i < 12; ++i) {
        double t;
        scanf("%lf", &t);
        s += t;
    }
    s /= 12;
    printf("$%.2f\n", s);
    return 0;
}
/**************************************************************
	Problem: 20517
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
