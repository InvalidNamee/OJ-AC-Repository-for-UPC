#include <cstdio>
#include <cmath>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b), a && b) {
        int s = a * b / gcd(a, b);
        int v1 = s / a, v2 = s / b;
        int t = s / (v1 + v2) * 2, lst = s % (v1 + v2);
        if (!lst) printf("%d\n", t);
        else if (lst <= v1) printf("%d\n", t + 1);
        else printf("%d\n", t + 2);
    }
    return 0;
}
/**************************************************************
	Problem: 1025
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
