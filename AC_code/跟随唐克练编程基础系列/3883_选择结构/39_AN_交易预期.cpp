#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int p, q, m;
    scanf("%d%d%d", &p, &q, &m);
    printf(p <= m && m <= q ? "Yes\n" : "No\n");
    return 0;
}
/**************************************************************
	Problem: 2974
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
