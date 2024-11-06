#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    printf(!(w & 1) && w != 2 ? "YES\n" : "NO\n");
    return 0;
}
/**************************************************************
	Problem: 9734
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2220 kb
****************************************************************/
