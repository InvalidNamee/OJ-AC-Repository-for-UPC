#include <cstdio>

int work(int n, const int &m) {
    if (n == m - 1) return 1;
    else if (n < m) return 0;
    else return n / m + work(n / m + n % m, m);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", n + work(n, m));
    return 0;
}
/**************************************************************
	Problem: 11601
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
