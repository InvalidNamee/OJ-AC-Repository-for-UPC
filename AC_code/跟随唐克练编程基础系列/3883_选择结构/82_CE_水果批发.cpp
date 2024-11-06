#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    if (w <= 100) printf("%d\n", w * 2);
    else printf("%d\n", w + 100);
    return 0;
}
/**************************************************************
	Problem: 22416
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
