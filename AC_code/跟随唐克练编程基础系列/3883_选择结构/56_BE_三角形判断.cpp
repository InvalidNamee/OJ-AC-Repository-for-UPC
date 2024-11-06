#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    printf(a[0] + a[1] > a[2] ? "yes\n" : "no\n");
    return 0;
}
/**************************************************************
	Problem: 20340
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
