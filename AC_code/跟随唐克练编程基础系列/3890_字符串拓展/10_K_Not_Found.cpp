#include <iostream>

using namespace std;

bool t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) t[i - 'a'] = true;
    for (int i = 0; i < 26; ++i) {
        if (!t[i]) {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}

/**************************************************************
	Problem: 6594
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:2536 kb
****************************************************************/
