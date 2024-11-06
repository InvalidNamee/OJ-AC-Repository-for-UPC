#include <cstdio>

int t[10];

void work(int n) {
    while (n) {
        t[n % 10]++;
        n /= 10;
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {
        work(i);
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22534
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
