#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < t.length(); ++i) {
        cout << s[i] << t[i];
    }
    if (s.length() > t.length()) cout << s.back();
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 6537
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
