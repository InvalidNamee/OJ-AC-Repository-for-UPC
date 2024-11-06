#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf(n & 1 ? "%d是奇数\n" : "%d是偶数\n", n);
    return 0;
}
/**************************************************************
	Problem: 22432
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
