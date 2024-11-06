#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    char ls = s[0];
    int t = 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != ls) {
            if (t > 1) cout << t;
            cout << ls;
            t = 0;
        }
        ls = s[i];
        t++;
    }
    if (t > 1) cout << t;
    if (t) cout << ls;
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22655
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
