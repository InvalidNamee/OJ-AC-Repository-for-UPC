#include <cstdio>

int main() {
    double n, w, s = 0;
    while (scanf("%lf%lf", &n, &w) != EOF) {
        s += w * n;
    }
    printf("%.1f\n", s);
    return 0;
}
/**************************************************************
	Problem: 1036
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
