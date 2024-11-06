#include <iostream>

using namespace std;

bool check(const string &s, const string &t) {
    for (int i = 0; i < s.length(); ++i) {
        if (toupper(s[i]) != toupper(t[i])) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) cout << 1 << endl;
    else if (s == t) cout << 2 << endl;
    else if (check(s, t)) cout << 3 << endl;
    else cout << 4 << endl;
    return 0;
}
/**************************************************************
	Problem: 22645
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
