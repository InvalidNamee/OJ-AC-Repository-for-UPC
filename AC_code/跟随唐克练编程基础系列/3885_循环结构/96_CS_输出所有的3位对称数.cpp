#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    string s = to_string(n);
    if (s.length() != 3) return false;
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    for (int i = 100; i < 1000; ++i) {
        if (check(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 22459
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
