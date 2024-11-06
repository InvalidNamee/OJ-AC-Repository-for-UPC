#include <cstdio>

int mul(int x) {
    int res = 1;
    while (x) {
        if (x % 10) res *= x % 10;
        x /= 10;
    }
    return res;
}

int main() {
    int x;
    scanf("%d", &x);
    while (x = mul(x), x >= 10);
    printf("%d\n", x);
    return 0;
}
/**************************************************************
	Problem: 22533
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
