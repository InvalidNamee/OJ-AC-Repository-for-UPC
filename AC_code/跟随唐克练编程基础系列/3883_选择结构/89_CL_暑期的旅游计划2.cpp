#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool judge(int a[]) {
    for (int i = 0; i < 3; ++i) {
        if (a[i] >= 90) return true;
    }
    return false;
}

int main() {
    int a[3];
    for (int i = 0; i < 3; ++i) scanf("%d", &a[i]);
    printf(judge(a) ? "beijing\n" : "nanjing\n");
    return 0;
}
/**************************************************************
	Problem: 22423
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
