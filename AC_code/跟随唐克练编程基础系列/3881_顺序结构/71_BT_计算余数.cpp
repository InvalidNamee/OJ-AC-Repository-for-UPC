#include <cstdio>
#include <cmath>

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2f\n", a - floor(a / b) * b);
    return 0;
}

/**************************************************************
	Problem: 3233
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
