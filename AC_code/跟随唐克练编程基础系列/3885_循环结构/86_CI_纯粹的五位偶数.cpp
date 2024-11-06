#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    while (n) {
        if (n % 10 & 1) return false;
        else n /= 10;
    }
    return true;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 10000; i <= n; ++i) {
        if (check(i)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

/**************************************************************
	Problem: 22469
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2220 kb
****************************************************************/
