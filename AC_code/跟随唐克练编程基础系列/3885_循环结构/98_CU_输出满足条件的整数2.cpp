#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    return n / 100 > n / 10 % 10 && n / 10 % 10 > n % 10 && !(n / 100 + n / 10 % 10 + n % 10 & 1);
}

int main() {
    for (int i = 100; i < 1000; ++i) {
        if (check(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 22457
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
