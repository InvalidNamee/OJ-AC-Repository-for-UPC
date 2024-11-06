#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);
    if (b <= a) printf("delicious\n");
    else if (b <= x + a) printf("safe\n");
    else printf("dangerous\n");
    return 0;
}

/**************************************************************
	Problem: 6566
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
