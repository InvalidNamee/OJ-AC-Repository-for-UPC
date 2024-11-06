#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, v;
    scanf("%d%d%d", &a, &b, &v);
    printf("%d\n", 1 + (v - b - 1) / (a - b));
    return 0;
}
/**************************************************************
	Problem: 5364
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
