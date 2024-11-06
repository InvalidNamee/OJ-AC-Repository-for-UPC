#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i % 10 == 5 || i % 10 == 8) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22453
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
