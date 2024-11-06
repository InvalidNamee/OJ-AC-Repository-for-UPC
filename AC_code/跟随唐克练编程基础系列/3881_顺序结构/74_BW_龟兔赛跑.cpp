#include <cstdio>
#include <cmath>

int main() {
    int x, y, t;
    scanf("%d%d%d", &x, &y, &t);
    printf("%d\n", (int)floor((double)(t * x) / (y - x) * y));
    return 0;
}

/**************************************************************
	Problem: 10406
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
