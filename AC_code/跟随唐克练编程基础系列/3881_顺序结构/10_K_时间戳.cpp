#include <cstdio>
#include <iostream>

using namespace std;

int read() {
    int res = 0;
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) res = res * 10 + c - 48, c = getchar();
    return res;
}

int main() {
    int n = read();
    int a = 2011, b = 1, c = 1;
    c += n / 86400;
    if (c > 30) {
        c -= 1;
        b += c / 30;
        c %= 30;
        c += 1;
    }
    if (b > 12) {
        b -= 1;
        a += b / 12;
        b %= 12;
        b += 1;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

/**************************************************************
	Problem: 8042
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
