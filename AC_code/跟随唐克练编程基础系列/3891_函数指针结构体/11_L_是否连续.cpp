#include <iostream>

using namespace std;

bool Fun(string s) {
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] - s[i - 1] != 1) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (Fun(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
/**************************************************************
	Problem: 3282
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
