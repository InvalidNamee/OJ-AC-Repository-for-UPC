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
    for (int i = 1000; i < 10000; ++i) {
        if (check(i) == 10) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22440
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:1112 kb
****************************************************************/
