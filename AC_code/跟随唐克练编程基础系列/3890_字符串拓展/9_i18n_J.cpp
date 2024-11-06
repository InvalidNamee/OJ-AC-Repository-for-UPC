#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    cout << s.front() << s.length() - 2 << s.back() << endl;
    return 0;
}

/**************************************************************
	Problem: 6589
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
