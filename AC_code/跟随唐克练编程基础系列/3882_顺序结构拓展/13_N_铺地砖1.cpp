#include <cstdio>
int main() {
	int n, m, a;
	scanf("%d%d%d", &n, &m, &a);
	printf("%d\n", ((n + a - 1) / a) * ((m + a - 1) / a));
	return 0;
}
/**************************************************************
	Problem: 23381
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
