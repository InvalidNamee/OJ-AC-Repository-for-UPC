#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x, y, z;
    scanf("%d%d%d%d", &n, &x, &y, &z);
    printf("%d\n", max(0, n - x - y - z));
    return 0;
}
/**************************************************************
	Problem: 10094
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
