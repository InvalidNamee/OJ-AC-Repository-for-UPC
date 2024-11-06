#include <cstdio>
#include <iostream>

using namespace std;

void work(int &a, int &b, int &c) {
    a += (b >> 1) + (c >> 1);
    b >>= 1, c >>= 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a = n / 3, b = n / 3, c = n / 3;
    work(c, a, b);
    work(b, a, c);
    work(a, b, c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

/**************************************************************
	Problem: 23037
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
