#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        cout << s;
        for (int i = s.length() - 2; i >= 0; --i) cout << s[i];
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11106
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:2384 kb
****************************************************************/
