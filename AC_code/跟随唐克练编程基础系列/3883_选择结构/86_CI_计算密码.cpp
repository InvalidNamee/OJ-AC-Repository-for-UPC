#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d", &b);
    a = b / 1000;
    b %= 1000;
    printf("%03d%03d\n", max(a, b), min(a, b));
    return 0;
}
/**************************************************************
	Problem: 22420
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
