#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double x;
    scanf("%lf", &x);
    double lst = x, now = 1.0 / 2 * (x + x / x);
    while (fabs(lst - now) >= 1e-5) {
        lst = now;
        now = 1.0 / 2 * (lst + x / lst);
    }
    printf("The square root of %.2f is %.5f\n", x, now);
    return 0;
}
/**************************************************************
	Problem: 10036
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
