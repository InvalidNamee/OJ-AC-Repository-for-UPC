#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf(n > 9 && n < 100 && !(n & 1) ? "Yes\n" : "No\n");
    return 0;
}
/**************************************************************
	Problem: 22410
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
