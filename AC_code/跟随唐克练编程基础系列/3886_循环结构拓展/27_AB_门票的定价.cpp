#include <cstdio>
#include <cmath>

int calc(int n, int t) {
    return (1200 + 30 * n - n * t) * t;
}

int main() {
    int n;
    scanf("%d", &n);
    int t = (int)((1200.0 / n + 30 - t) / 2 + 0.5);
    if (t < 30) printf("%d %d\n", 30, 1200 * 30);
    else printf("%d %d\n", t, calc(n, t));
    // (1200 + 30n - nt) * t; 
    // n(1200 / n + 30 - t) * t
    return 0;
}
/**************************************************************
	Problem: 22513
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
