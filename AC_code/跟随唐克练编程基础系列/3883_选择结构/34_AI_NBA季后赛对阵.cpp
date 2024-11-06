#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > d) printf("1 ");
    else printf("4 ");
    printf("VS ");
    if (b > c) printf("2\n");
    else printf("3\n");
    return 0;
}
/**************************************************************
	Problem: 1030
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
