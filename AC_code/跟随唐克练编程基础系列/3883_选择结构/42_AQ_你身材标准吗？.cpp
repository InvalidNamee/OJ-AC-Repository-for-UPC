#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int h, w;
    scanf("%d,%d", &h, &w);
    double s = 0.9 * (h - 100);
    if (w > 1.1 * s) printf("fat\n");
    else if (w < 0.9 * s) printf("thin\n");
    else printf("standard\n");
    return 0;
}
/**************************************************************
	Problem: 1065
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
