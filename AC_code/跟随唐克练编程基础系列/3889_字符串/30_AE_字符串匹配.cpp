#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    int p = -1;
    for (int i = 0; i < s.length() - t.length() + 1; ++i) {
        if (s.substr(i, t.length()) == t) {
            p = i;
            break;
        }
    }
    cout << p << endl;
    return 0;
}
/**************************************************************
	Problem: 9866
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
