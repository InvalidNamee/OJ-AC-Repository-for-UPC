#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1) return 2;
    else if (n == 2) return 3;
    else if (n == 3) return 5;
    else return f(n - 1) + f(n - 2) - f(n - 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

/**************************************************************
	Problem: 1265
	Language: C++
	Result: 正确
	Time:55 ms
	Memory:2220 kb
****************************************************************/
