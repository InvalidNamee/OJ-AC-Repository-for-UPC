#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    int b[] = {abs(a[0] - a[1]), abs(a[0] - a[2]), abs(a[1] - a[2])};
    sort(b, b + 3);
    printf("%d\n", b[0] + b[1]);
    return 0;
}

/**************************************************************
	Problem: 12141
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
