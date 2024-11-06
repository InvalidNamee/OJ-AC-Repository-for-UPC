#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char c = 0;
    for (int i = 0; i < 4; ++i) {
        c = max((int)c, (int)getchar());
    }
    putchar(c);
    return 0;
}
/**************************************************************
	Problem: 22394
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
