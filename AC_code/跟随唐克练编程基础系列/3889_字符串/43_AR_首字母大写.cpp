#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    getline(cin, s);
    bool ls = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '\r' || s[i] == '\n' || s[i] == ' ' || s[i] == '\t') {
            ls = true;
        }
        else if (ls) {
            if (islower(s[i])) s[i] = toupper(s[i]);
            ls = false;
        }
    }
    cout << s;
    return 0;
}
/**************************************************************
	Problem: 9853
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2384 kb
****************************************************************/
