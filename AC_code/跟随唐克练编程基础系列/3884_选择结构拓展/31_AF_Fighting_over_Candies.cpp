#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define int long long

using namespace std;

signed main() {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%lld", &a[i]);
    }
    sort(a, a + 3);
    printf(a[0] + a[1] == a[2] ? "Yes\n" : "No\n");
    return 0;
}

/**************************************************************
	Problem: 6477
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
