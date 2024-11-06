#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double x;
    char y, s;
    cin >> x >> y >> s;
    cout << (int)((y == 'a' ? 5.65 * x : 6.05 * x) * (s == 'm' ? 0.95 : 1.0) + 0.5) << endl;
    return 0;
}
/**************************************************************
	Problem: 1064
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
