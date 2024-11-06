#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);
    if (abs(x - a) < abs(x - b)) printf("A\n");
    else printf("B\n");
    return 0;
}

/**************************************************************
	Problem: 6593
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
