#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, mn = 100;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mn = min(mn, t);
    }
    printf("%d\n", mn);
    return 0;
}
/**************************************************************
	Problem: 1008
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
