#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // freopen("input", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c = 0, d = 0;
        scanf("%d%d", &a, &b);
        while (a) {
            c |= (a % 10) << d++;
            a /= 10;
        }
        printf("%d\n", c * b);
    }
    return 0;
}

/**************************************************************
	Problem: 3102
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
