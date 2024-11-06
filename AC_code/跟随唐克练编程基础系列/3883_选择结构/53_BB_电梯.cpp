#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    if (abs(n - a) < abs(n - b)) printf("%d %d\n", a, b);
    else printf("%d %d\n", b, a);
    return 0;
}
/**************************************************************
	Problem: 18044
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
