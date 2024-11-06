#include <iostream>
#include <algorithm>

using namespace std;

int t[2][26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (isupper(i)) t[1][i - 'A']++;
        else t[0][i - 'a']++;
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (t[i][j] > 1) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}

/**************************************************************
	Problem: 6561
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
