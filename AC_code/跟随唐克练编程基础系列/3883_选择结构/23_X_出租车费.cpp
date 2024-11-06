#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, t;
    scanf("%d%d", &x, &t);
    printf("%.2f\n", 9.0 + max(0.0, (t ? 1.5 : 1.75) * min((x - 3), 3)) + max(0.0, (t ? 2.25 : 2.5) * (x - 6)));
    return 0;
}
/**************************************************************
	Problem: 12428
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
