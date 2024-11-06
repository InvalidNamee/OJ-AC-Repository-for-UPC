#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        cout << (char)toupper(s[0]);
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22653
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
