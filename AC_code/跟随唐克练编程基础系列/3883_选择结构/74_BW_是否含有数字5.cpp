#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n;
    int s = 0, flag = false;
    cin >> n;
    for (auto i : n) {
        if (i == '5') flag = true;
        s += i - 48;
    }
    if (flag) cout << s << endl;
    else cout << n << endl;
    return 0;
}
/**************************************************************
	Problem: 22408
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
