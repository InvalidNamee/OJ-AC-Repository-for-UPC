#include <cstdio>
#include <cmath>

int main() {
    double r, m, y;
    scanf("%lf%lf%lf", &r, &m, &y);
    printf("%d\n", (int)ceil(log(y / m) / log(1.0 + r / 100)));
    return 0;
}
/**************************************************************
	Problem: 8663
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/
