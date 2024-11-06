#include <cstdio>

int main() {
    int a, b;
    int c = 0, d = 0, t = 0;
    while (scanf("%d%d", &a, &b) != EOF) {
        c += a, d += b;
        t++;
    }
    printf("%d %.1f\n", t, (double)c / d);
    return 0;
}
/**************************************************************
	Problem: 1035
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
