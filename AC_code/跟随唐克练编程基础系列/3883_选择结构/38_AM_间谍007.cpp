#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf(n / 100 == n / 10 % 10 + n % 10 ? "I'm safe!\n" : "Just run!\n");
    return 0;
}
/**************************************************************
	Problem: 1057
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
