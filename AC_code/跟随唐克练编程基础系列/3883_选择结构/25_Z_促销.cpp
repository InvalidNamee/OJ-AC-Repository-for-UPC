#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

double f(int n) {
    if (n < 500) return 1.0;
    else if (n < 1000) return 0.95;
    else if (n < 3000) return 0.9;
    else if (n < 5000) return 0.85;
    else return 0.8;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.2f\n", f(n) * n);
    return 0;
}
/**************************************************************
	Problem: 2181
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
