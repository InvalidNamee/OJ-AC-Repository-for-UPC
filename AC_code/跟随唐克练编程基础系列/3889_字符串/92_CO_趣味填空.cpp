#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int c;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '=') {
            c = stoi(s.substr(i + 1, s.length() - i));
            s.erase(i, s.length() - i + 1);
            break;
        }
    }
    for (int i = 0; i < s.length() - 1; ++i) {
        int a = stoi(s.substr(0, i + 1)), b = stoi(s.substr(i + 1, s.length() - i - 1));
        if (a + b == c) {
            cout << a << '+' << b << '=' << c << endl;
            return 0;
        }
    }
    cout << "Impossible!" << endl;
    return 0;
}
/**************************************************************
	Problem: 22662
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
