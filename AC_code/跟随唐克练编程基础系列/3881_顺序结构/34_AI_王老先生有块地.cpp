#include <cstdio>
#include <cmath>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    a = sqrt(a), b = sqrt(b), c = sqrt(c);
    double cosa = (b * b + c * c - a * a) / (2 * b * c);
    printf("%.2f\n", 0.5 * b * c * sqrt(1 - cosa * cosa));
    return 0;
}

/**************************************************************
	Problem: 1060
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
