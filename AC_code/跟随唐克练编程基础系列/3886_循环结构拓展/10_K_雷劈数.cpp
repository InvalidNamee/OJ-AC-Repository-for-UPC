#include <cstdio>

int check(int n) {
    return n == (n / 100 + n % 100) * (n / 100 + n % 100);
}

int main() {
    for (int i = 1000; i < 10000; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22439
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
