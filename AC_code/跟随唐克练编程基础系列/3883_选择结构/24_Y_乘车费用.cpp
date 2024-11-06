#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", 14 + (int)(0.5 + 2.3 * max(n - 3, 0)));
    return 0;
}
/**************************************************************
	Problem: 10363
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
