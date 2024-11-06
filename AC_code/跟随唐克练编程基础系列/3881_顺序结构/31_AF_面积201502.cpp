#include <cstdio>

int main() {
    int l;
    scanf("%d", &l);
    printf("%d\n", l % 4 == 0 ? (l / 4) * (l / 4) : (l / 4) * (l / 2 - l / 4));
    return 0;
}

/**************************************************************
	Problem: 13995
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
