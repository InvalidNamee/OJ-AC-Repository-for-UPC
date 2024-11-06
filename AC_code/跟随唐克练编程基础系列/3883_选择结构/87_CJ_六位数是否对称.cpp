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
	Problem: 22421
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
