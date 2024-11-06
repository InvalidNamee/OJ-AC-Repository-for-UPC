#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    for (int i = 1000; i < 10000; ++i) {
        int j = i * 9;
        string s = to_string(i), t = to_string(j);
        reverse(t.begin(), t.end());
        if (s == t) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22449
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
