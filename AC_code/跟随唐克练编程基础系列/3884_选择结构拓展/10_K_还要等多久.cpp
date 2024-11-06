#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n <= 25 ? 25 - n : 85 - n);
    return 0;
}
/**************************************************************
	Problem: 23546
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2220 kb
****************************************************************/
