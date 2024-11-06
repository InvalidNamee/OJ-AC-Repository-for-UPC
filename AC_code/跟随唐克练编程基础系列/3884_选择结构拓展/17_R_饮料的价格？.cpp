#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

double f(int n) {
    if (n < 2) return 5.0;
    else if (n < 6) return 4.5;
    else if (n < 11) return 4.0;
    else return 3.5;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.1f\n", f(n) * n);
    return 0;
}
/**************************************************************
	Problem: 22395
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
