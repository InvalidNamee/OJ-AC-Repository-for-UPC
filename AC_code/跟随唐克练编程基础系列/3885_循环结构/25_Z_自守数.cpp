#include <cstdio>

int len(int n) {
    int res = 1;
    while (n) {
        res *= 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(n * n % len(n) == n ? "Yes\n" : "No\n");
    return 0;
}
/**************************************************************
	Problem: 8675
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1236 kb
****************************************************************/
