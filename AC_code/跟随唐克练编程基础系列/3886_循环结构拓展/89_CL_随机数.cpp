#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = max(a, b); i <= 6; ++i) printf("%d ", i);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 14071
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
