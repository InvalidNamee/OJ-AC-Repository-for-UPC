#include <cstdio>

int t[] = {50, 10, 5, 2, 1};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", n / t[i]);
        n %= t[i];
    }
    return 0;
}

/**************************************************************
	Problem: 8110
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
