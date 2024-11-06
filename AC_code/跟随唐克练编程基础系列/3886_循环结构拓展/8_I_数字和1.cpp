#include <cstdio>

int check(int n) {
    int res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", check(n));
    return 0;
}
/**************************************************************
	Problem: 22437
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
