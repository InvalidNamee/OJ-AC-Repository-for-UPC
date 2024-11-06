#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int mn = 0x3f3f3f3f;
    for (int i = 0; i < 3; ++i) {
        int t;
        scanf("%d", &t);
        mn = min(t, mn);
    }
    printf("%d\n", mn);
    return 0;
}
/**************************************************************
	Problem: 23547
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
