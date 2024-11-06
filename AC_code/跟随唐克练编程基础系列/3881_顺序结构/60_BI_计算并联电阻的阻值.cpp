#include <cstdio>

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2f\n", 1.0 / (1.0 / a + 1.0 / b));
    return 0;
}

/**************************************************************
	Problem: 11585
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
