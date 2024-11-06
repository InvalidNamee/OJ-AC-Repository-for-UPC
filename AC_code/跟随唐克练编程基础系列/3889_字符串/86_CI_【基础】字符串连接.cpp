#include <iostream>

using namespace std;

bool t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (!(t[s[i] - 'a'])) t[s[i] - 'a'] = true, cout << s[i];
    }
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (!(t[s[i] - 'a'])) t[s[i] - 'a'] = true, cout << s[i];
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22656
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
