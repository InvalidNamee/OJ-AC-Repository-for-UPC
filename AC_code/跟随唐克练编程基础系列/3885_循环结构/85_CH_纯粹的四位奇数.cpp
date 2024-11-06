#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    while (n) {
        if (n % 10 & 1) n /= 10;
        else return false;
    }
    return true;
}

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1000; i <= n; ++i) {
        if (check(i)) s += i;
    }
    printf("%d\n", s);
    return 0;
}

/**************************************************************
	Problem: 22470
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
