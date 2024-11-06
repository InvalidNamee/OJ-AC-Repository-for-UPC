#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int mx = 0;
    string s, t;
    while (cin >> s) {
        if (s.length() > mx) mx = s.length(), t = s;
    }
    cout << t << endl;
    return 0;
}
/**************************************************************
	Problem: 22658
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
