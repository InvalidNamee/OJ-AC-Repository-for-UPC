#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", (int)pow(max(a, b), 2));
    return 0;
}
/**************************************************************
	Problem: 22414
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
