#include <iostream>

using namespace std;

int t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (islower(i)) t[i - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (t[i] & 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/**************************************************************
	Problem: 6460
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
