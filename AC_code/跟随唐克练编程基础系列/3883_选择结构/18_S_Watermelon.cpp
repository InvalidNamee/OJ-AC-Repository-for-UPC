#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf((n & 1 || n == 2) ? "NO\n" : "YES\n");
    return 0;
}
/**************************************************************
	Problem: 13169
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
