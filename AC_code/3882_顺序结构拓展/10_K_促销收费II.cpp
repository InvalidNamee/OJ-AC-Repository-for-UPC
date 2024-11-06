#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int m = n, t = 0;
    t += m / 500 * 240;
    m %= 500;
    t += m / 300 * 120;
    printf("%d\n", n - t);
    return 0;
}

/**************************************************************
	Problem: 10256
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
