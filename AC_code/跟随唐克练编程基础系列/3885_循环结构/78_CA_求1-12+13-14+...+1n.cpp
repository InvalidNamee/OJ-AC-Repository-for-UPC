#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    double ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) { 
        if (i & 1) ans += 1.0 / i;
        else ans -= 1.0 / i;
    }
    printf("%.3f\n", ans);
    return 0;
}

/**************************************************************
	Problem: 22477
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
