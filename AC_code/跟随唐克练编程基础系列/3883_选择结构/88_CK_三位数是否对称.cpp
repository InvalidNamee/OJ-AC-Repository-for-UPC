#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    b = a;
    reverse(a.begin(), a.end());
    printf(a == b ? "Y\n" : "N\n");
    return 0;
}
/**************************************************************
	Problem: 22422
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2224 kb
****************************************************************/
