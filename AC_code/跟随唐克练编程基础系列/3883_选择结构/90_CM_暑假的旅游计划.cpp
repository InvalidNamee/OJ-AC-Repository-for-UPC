#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool judge(int a[]) {
    return (a[0] + a[1] + a[2]) / 3 >= 90;
}

int main() {
    int a[3];
    for (int i = 0; i < 3; ++i) scanf("%d", &a[i]);
    printf(judge(a) ? "beijing\n" : "nanjing\n");
    return 0;
}
/**************************************************************
	Problem: 22424
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
