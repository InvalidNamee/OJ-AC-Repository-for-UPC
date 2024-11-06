#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    // if (a > c) swap(a, c), swap(b, d);
    printf("%d\n", max(0, min(b, d) - max(a, c)));
    return 0;
}

/**************************************************************
	Problem: 6688
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
