#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%d\n", abs(a - c) + abs(b - d));
    return 0;
}
/**************************************************************
	Problem: 23385
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
