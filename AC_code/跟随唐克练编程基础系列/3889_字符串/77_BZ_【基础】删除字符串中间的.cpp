#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    while (s[l] == '*') l++;
    while (s[r] == '*') r--;
    for (int i = 0; i < s.length(); ++i) {
        if (i < l) cout << s[i];
        else if (i > r) cout << s[i];
        else if (s[i] != '*') cout << s[i];
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22647
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
