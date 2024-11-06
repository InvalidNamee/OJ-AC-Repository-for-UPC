#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    for (int i = 10; i < 100; ++i) {
        if (i % 10 == 2 || i / 10 == 2) printf("%d\n", i);
    }
    return 0;
}

/**************************************************************
	Problem: 22460
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
