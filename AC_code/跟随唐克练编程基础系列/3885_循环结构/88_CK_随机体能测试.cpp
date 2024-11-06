#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int check(int n) {
    int cnt = 0;
    while (n) {
        if (n % 10 == 1) cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        cnt += check(i);
    }
    printf("%d\n", cnt);
    return 0;
}

/**************************************************************
	Problem: 22467
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
