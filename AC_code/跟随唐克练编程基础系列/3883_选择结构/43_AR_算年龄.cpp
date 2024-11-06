#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if (e > b || e == b && f >= c) printf("%d\n", d - a);
    else printf("%d\n", d - a - 1);
    return 0;
}
/**************************************************************
	Problem: 9686
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
