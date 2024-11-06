#include <cstdio>
#include <cmath>
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
    int a = read(), b = read(), c = read();
    if (a == b) printf("C\n");
    else if (a == c) printf("B\n");
    else printf("A\n");
    return 0;
}

/**************************************************************
	Problem: 8659
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
