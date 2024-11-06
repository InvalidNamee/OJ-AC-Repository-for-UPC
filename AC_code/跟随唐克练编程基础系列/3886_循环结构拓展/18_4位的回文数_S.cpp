#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    for (int i = 1000; i < 10000; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22447
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
