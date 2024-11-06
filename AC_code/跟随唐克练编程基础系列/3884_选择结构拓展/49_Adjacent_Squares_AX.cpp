#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int h, w, r, c;

bool valid(int a, int b) {
    return a > 0 && b > 0 && a <= h && b <= w;
}

int main() {
    scanf("%d%d%d%d", &h, &w, &r, &c);
    int ans = valid(r - 1, c) + valid(r + 1, c) + valid(r, c - 1) + valid(r, c + 1);
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 22096
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
