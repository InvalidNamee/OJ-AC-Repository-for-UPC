#include <cstdio>

int main() {
    int n, s = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        s += i * (i + 1) / 2;
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 23800
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/