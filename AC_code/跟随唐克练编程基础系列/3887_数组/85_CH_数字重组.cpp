#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 9848
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
