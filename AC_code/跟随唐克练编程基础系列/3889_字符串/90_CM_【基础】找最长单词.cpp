#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    while (cin >> s, s.back() != '.') {
        if (s.find('a') != EOF) {
            if (s.length() > t.length()) t = s;
        }
    }
    s.pop_back();
    if (s.find('a') != EOF) {
        if (s.length() > t.length()) t = s;
    }
    if (t == "") cout << "NO" << endl;
    else cout << t << endl;
    return 0;
}
/**************************************************************
	Problem: 22660
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
