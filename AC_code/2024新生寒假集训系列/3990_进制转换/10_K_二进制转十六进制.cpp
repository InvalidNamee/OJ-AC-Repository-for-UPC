#include <iostream>

using namespace std;

char trans(string s) {
    int res = 0;
    for (auto i : s) {
        res <<= 1;
        res |= i - 48;
    }
    return res < 10 ? res + 48 : res - 10 + 'A';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if (s.length() % 4) cout << trans(s.substr(0, s.length() % 4));
    for (int i = s.length() % 4; i <= s.length() - 4; i += 4) {
        cout << trans(s.substr(i, 4));
    } 
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23831
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/