#include <cstdio>

int d[] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};

int main() {
    int a;
    scanf("%d", &a);
    int s = 0;
    while (a) {
        s += d[a % 10];
        a /= 10;
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 21286
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
