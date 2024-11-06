#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", min(a % c, b % c));
    return 0;
}
/**************************************************************
	Problem: 20339
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
