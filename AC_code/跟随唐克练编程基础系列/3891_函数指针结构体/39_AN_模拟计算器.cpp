#include <cstdio>

int main() {
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    if (k == 1) printf("%d\n", m + n);
    else if (k == 2) printf("%d\n", m - n);
    else if (k == 3) printf("%d\n", m * n);
    else printf("%d\n", m / n);
    return 0;
}
/**************************************************************
	Problem: 11606
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
