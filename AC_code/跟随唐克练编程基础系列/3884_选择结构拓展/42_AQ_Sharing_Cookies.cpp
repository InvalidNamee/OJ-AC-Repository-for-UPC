#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf(a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0 ? "Possible\n" : "Impossible\n");
    return 0;
}

/**************************************************************
	Problem: 6578
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
