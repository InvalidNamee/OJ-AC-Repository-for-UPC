#include <cstdio>

int f(int n) {
    return n / 100 * 60 + n % 100;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int t = f(m) - f(n);
    printf("%d:%02d\n", t / 60, t % 60);
    return 0;
}
/**************************************************************
	Problem: 8043
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
