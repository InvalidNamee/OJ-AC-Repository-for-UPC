#include <cstdio>
#include <cmath>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int t = (a + b + c) >> 1;
    printf("%d\n%d\n%d\n", t - b, t - c, t - a);
    return 0;
}

/**************************************************************
	Problem: 21324
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
