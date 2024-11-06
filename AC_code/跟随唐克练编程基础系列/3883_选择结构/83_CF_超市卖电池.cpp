#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%.1f\n", (n > 10 ? 1.8 : 2.0) * n);
    return 0;
}
/**************************************************************
	Problem: 22417
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
