#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'B') {
            if (!t.empty()) t.pop_back();
        }
        else {
            t += s[i];
        }
    }
    cout << t << endl;
    return 0;
}
/**************************************************************
	Problem: 6455
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2224 kb
****************************************************************/
