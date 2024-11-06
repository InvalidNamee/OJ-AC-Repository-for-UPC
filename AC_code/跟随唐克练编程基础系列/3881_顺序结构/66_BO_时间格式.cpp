#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d:%d:%d\n", n / 3600, n / 60 % 60, n % 60);
    return 0;
}

/**************************************************************
	Problem: 18665
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:1236 kb
****************************************************************/
