#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    for (int i = 1; i < 500; ++i) {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22450
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
