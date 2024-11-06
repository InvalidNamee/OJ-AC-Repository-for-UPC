#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int t = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) t = t * 10 + s[i] - 48;
        else {
            if (!t) t = 1;
            for (int j = 0; j < t; ++j) cout << s[i];
            t = 0;
        }
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22654
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
