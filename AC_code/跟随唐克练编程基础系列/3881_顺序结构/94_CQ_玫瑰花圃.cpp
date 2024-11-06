#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    printf("%.1f%%\n", (double)(n + n + 3) / (n * n) * 100);
    return 0;
}

/**************************************************************
	Problem: 22385
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
