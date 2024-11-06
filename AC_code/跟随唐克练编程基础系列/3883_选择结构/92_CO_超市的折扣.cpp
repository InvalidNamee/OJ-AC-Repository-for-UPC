#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double s = 0;
    for (int i = 0; i < 3; ++i) {
        double t;
        scanf("%lf", &t);
        s += t;
    }
    printf("%.1f\n", (s >= 200 ? 0.8 : 0.9) * s);
    return 0;
}
/**************************************************************
	Problem: 22426
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
