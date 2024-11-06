#include <cstdio>

bool check(int n) {
    if (n & 1) return false;
    while (n) {
        if (n % 10 == 3 || n % 10 == 5) return true;
        else n /= 10;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22455
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
