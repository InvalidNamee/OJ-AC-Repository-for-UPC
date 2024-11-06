#include <cstdio>

int main() {
    int a, b, c, d;
    scanf("%d:%d%d:%d", &a, &b, &c, &d);
    int e = a + c, f = b + d;
    e += f / 60;
    f %= 60;
    printf("%02d:%02d\n", e % 24, f);
    return 0;
}

/**************************************************************
	Problem: 1010
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
