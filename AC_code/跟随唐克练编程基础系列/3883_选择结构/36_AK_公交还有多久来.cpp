#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (15 - (n % 100 % 15)) % 15);
    return 0;
}
/**************************************************************
	Problem: 2953
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
