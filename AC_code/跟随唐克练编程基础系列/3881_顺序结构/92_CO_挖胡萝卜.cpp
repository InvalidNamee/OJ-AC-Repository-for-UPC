#include <cstdio>
#include <cmath>

int main() {
    int x, y, z;
    scanf("%d", &x);
    y = x * 3;
    z = y - 8;
    printf("%d\n%d\n%.1f\n", y, z, (double)(x + y + z) / 3);
    return 0;
}

/**************************************************************
	Problem: 22383
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
