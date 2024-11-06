#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d", &a);
    b = a / 10 + a % 10 * 10;
    printf("%d\n", max(a, b));
    return 0;
}
/**************************************************************
	Problem: 22425
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
