#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double w;
    scanf("%lf", &w);
    if (w <= 20.0) printf("%.2f\n", 1.68 * w);
    else printf("%.2f\n", 1.98 * w);
    return 0;
}
/**************************************************************
	Problem: 22415
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
