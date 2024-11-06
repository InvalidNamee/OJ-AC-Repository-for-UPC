#include <cstdio>
#include <cmath>

int main() {
    int r1, r2;
    scanf("%d%d", &r1, &r2);
    printf("%.2f\n", 3.14 * (pow(r1, 2) - pow(r2, 2)));
    return 0;
}

/**************************************************************
	Problem: 22378
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
