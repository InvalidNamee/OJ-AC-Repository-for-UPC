#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, mx = 0, mn = 100, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s += t;
        mx = max(mx, t), mn = min(mn, t);
    }
    printf("%.2f\n", (double)(s - mx - mn) / (n - 2));
    return 0;
}
/**************************************************************
	Problem: 9838
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
