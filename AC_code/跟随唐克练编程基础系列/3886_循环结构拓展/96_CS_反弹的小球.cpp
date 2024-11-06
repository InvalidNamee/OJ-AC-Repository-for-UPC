#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double h, s = 0.0;
    int n;
    scanf("%lf%d", &h, &n);
    s += h;
    for (int i = 1; i < n; ++i) {
        h = h * 2 / 3;
        s += 2 * h;
    }
    printf("%.2f\n", s);
    return 0;
}
/**************************************************************
	Problem: 1009
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
