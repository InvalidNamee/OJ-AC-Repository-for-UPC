#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    int p = -1, f = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        s[i] = tolower(s[i]);
    }
    cin.ignore();
    getline(cin, t);
    for (int i = 0; i < t.length(); ++i) {
        t[i] = tolower(t[i]);
    }
    for (int i = 0; i <= t.length() - s.length(); ++i) {
        if (t.substr(i, s.length()) == s) {
            if ((i - 1 < 0 || !isalpha(t[i - 1])) && (i + s.length() >= t.length() || !isalpha(t[i + s.length()]))) {
                if (p == -1) p = i;
                f++;
            }
        }
    }
    if (!f) cout << -1 << endl;
    else cout << f << ' ' << p << endl;
    return 0;
}
/**************************************************************
	Problem: 1706
	Language: C++
	Result: 正确
	Time:24 ms
	Memory:3952 kb
****************************************************************/
