#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int f(int n) {
    if (n <= 5) return 2;
    else if (n <= 10) return 3;
    else if (n <= 17) return 4;
    else if (n <= 27) return 5;
    else if (n <= 38) return 6;
    else return 6 + (n - 38 + 19) / 20;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
/**************************************************************
	Problem: 1033
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
