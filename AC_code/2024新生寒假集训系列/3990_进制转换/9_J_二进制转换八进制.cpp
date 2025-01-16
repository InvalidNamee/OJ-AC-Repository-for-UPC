#include <iostream>

using namespace std;

int trans(string s) {
    return ((s[0] - 48) << 2) + ((s[1] - 48) << 1) + (s[2] - 48);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if (s.length() % 3 == 1) cout << s[0];
    else if (s.length() % 3 == 2) cout << ((s[0] - 48) << 1) + (s[1] - 48);
    for (int i = s.length() % 3; i <= s.length() - 3; i += 3) {
        cout << trans(s.substr(i, 3));
    } 
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23830
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/