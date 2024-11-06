#include <cstdio>

int a[1000];

int main() {
    int n, p;
    scanf("%d%d", &n, &p);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) printf("%d ", a[(i + p + 1) % n]);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9832
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
