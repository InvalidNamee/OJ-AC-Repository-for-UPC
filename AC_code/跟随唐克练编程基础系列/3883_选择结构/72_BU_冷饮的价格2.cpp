#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

double f(int n) {
    if (n >= 30) return 1.0 * n;
    else if (n >= 20) return 1.2 * n;
    else if (n >= 10) return 1.5 * n;
    else return 1.8 * n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.1f\n", f(n));
    return 0;
}
/**************************************************************
	Problem: 22406
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
