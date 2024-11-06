#include <cstdio>

int calc(int n) {
    return n / 10 + n % 10 + n / 10 * (n % 10);
}

int main() {
    for (int i = 10; i < 100; ++i) {
        if (calc(i) == i) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22452
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
