#include <cstdio>

int main() {
    double a;
    int b;
    while (scanf("%lf%d", &a, &b) != EOF) {
        printf("%d\n", (int)(a * b * 38) / 100 * 100);
    }
    return 0;
}
/**************************************************************
	Problem: 1018
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
