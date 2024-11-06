#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int mx = -0x3f3f3f3f;
    int t;
    while (scanf("%d", &t), t != 0) {
        mx = max(mx, t);
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 3285
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
