#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (i & 1) {
            if (s[i] == 'R') {
                cout << "No" << endl;
                return 0;
            }
        }
        else {
            if (s[i] == 'L') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/**************************************************************
	Problem: 14555
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
