#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int mn = 0x3f3f3f3f, mx = -0x3f3f3f3f;
    for (int i = 0; i < 3; ++i) {
        char c = getchar();
        mn = min(mn, c - 48);
        mx = max(mx, c - 48);
    }
    printf("%d\n", mx - mn);
    return 0;
}
/**************************************************************
	Problem: 22398
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
