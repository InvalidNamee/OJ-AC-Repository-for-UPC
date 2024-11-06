#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int mx = 0;
    for (int i = 0; i < 3; ++i) {
        int t;
        scanf("%d", &t);
        mx = max(mx, t);
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 14269
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
