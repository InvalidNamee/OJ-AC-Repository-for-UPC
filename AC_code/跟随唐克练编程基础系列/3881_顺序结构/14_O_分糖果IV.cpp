#include <cstdio>

int mod(int n) {
    return (n % 5 + 5) % 5;
}

int main() {
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; ++i) {
        a[mod(i - 1)] += a[i] / 3;
        a[mod(i + 1)] += a[i] / 3;
        a[i] = a[i] / 3;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 8111
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
