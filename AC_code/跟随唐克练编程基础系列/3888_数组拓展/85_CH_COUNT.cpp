#include <cstdio>

int a[10];

void count(int n) {
    while (n) {
        a[n % 10]++;
        n /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        count(i);
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 22622
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1236 kb
****************************************************************/
