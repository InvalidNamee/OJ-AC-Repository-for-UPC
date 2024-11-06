#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%.2f\n", 2.5 + max(0.0, 1.5 * (n - 10)));
    return 0;
}
/**************************************************************
	Problem: 22427
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
