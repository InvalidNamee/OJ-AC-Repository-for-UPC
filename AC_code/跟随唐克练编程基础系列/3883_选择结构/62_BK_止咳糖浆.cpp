#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int f(int n) {
    if (n > 10) return 25;
    else if (n >= 7) return 15;
    else return 5;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (15 * f(n) + 119) / 120);
    return 0;
}
/**************************************************************
	Problem: 22396
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
