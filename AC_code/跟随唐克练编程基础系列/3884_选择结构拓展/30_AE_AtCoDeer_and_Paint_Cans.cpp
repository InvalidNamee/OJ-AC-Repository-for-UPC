#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define int long long

using namespace std;

map<int, int> mp;

signed main() {
    for (int i = 0; i < 3; ++i) {
        int t;
        scanf("%lld", &t);
        mp[t] = 1;
    }
    printf("%ld\n", mp.size());
    return 0;
}

/**************************************************************
	Problem: 6471
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
