#include <cstdio>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int t = c * 60 + d - a * 60 - b;
    printf("%d %d\n", t / 60, t % 60);
    return 0;
}
/**************************************************************
	Problem: 11354
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:1236 kb
****************************************************************/
