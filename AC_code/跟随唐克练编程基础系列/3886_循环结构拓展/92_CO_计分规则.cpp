#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int mx = 0, mn = 100;
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mx = max(mx, t), mn = min(mn, t);
    }
    printf("%.2f\n", (double)(mx + mn) / 2);
    return 0;
}
/**************************************************************
	Problem: 1003
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
