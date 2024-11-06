#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x0, y0, r, x, y;
    scanf("%d%d%d%d%d", &x0, &y0, &r, &x, &y);
    int d = (int)sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if (d == r) printf("On\n");
    else if (d < r) printf("In\n");
    else printf("Out\n");
    return 0;
}
/**************************************************************
	Problem: 5368
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
