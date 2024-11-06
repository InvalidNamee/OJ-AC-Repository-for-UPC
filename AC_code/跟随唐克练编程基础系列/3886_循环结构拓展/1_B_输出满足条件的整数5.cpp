#include <cstdio>

bool check(int n) {
    if (n % 8 != 0) return false;
    char a[4];
    for (int i = 0; i < 4; ++i) {
        a[i] = n % 10;
        n /= 10;
    }
    return (a[3] + a[2]) % 2 == 0 && (a[0] + a[1]) % 2 == 1 && a[2] + a[3] > a[0] + a[1];
}

int main() {
    for (int i = 1000; i < 10000; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22454
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
