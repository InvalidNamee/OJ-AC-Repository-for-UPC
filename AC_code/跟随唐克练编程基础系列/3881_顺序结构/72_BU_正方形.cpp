#include <cstdio>
#include <cmath>

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf(-1 <= a && a <= 1 && -1 <= b && b <= 1 ? "Yes\n" : "No\n"); 
    return 0;
}

/**************************************************************
	Problem: 3237
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
