#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    printf("%d\n", a[0] + a[1]);
    return 0;
}

/**************************************************************
	Problem: 6572
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
