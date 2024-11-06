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
    int a = read(), b = read(), c = read(), d = read(), e = read();
    printf("%d\n", c * 60 + d - a * 60 - b + e * 20);
    return 0;
}

/**************************************************************
	Problem: 1005
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
