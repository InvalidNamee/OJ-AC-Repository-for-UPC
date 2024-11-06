#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf(n % 3 == 0 && n % 8 == 0 ? "Yes!\n" : "No!\n");
    return 0;
}
/**************************************************************
	Problem: 1043
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
