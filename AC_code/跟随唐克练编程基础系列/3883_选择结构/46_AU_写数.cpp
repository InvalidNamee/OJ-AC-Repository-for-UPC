#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (n - 1) % 100 + 1);
    return 0;
}
/**************************************************************
	Problem: 13994
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
