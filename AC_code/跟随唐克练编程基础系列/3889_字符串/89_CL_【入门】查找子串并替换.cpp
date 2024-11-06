#include <iostream>
#include <map>

using namespace std;

map<int, bool> mark;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t, u;
    getline(cin, s);
    getline(cin, t);
    getline(cin, u);
    for (int i = t.length() - 1; i < s.length(); ++i) {
        if (s.substr(i - t.length() + 1, t.length()) == t) {
            mark[i - t.length() + 1] = true;
        } 
    }
    int i = 0;
    while (i < s.length()) {
        if (mark[i]) {
            cout << u;
            i += t.length();
        }
        else {
            cout << s[i];
            i++;
        }
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22659
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2388 kb
****************************************************************/
