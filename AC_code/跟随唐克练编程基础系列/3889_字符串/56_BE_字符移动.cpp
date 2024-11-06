#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    getline(cin, s);
    s += s[0];
    s.erase(0, 1);
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 11107
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
