#include <iostream>

using namespace std;

bool check(string s) {
    if (s.length() & 1) return false;
    for (int i = 0; i < (s.length() >> 1); ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        while (check(s)) s.erase(s.length() >> 1, s.length() >> 1);
        cout << s << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1050
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
