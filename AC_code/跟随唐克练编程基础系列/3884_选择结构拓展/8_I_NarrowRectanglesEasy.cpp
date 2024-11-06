#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int w, a, b;
    scanf("%d%d%d", &w, &a, &b);
    if (abs(a - b) <= w) printf("0\n");
    else printf("%d\n", min(abs(a + w - b), abs(a - w - b)));
    return 0;
}
/**************************************************************
	Problem: 6520
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
