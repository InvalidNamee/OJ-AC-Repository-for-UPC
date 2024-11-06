#include <cstdio>

int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    printf("%d\n", d * 3600 + e * 60 + f - a * 3600 - b * 60 - c);
    return 0;
}

/**************************************************************
	Problem: 14019
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
