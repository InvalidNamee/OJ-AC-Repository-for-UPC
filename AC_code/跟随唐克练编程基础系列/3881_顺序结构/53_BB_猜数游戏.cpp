#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    x = x * 1000 + x;
    printf("%d\n", x / 7 / 11 / 13);
    return 0;
}
/**************************************************************
	Problem: 3229
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
